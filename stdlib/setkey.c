#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <openssl/aes.h>

int main() {
    // 创建一个 64 位的密钥
    char key[8] = {0x11, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef};

    // 设置密钥
    setkey(key);

    // 需要加密的数据
    char temp[1024] = "qqqwwweeeasdfgds";
    printf("[%s]\n",temp);
    size_t len=strlen(temp);
    // 确保数据长度是 8 的倍数
    // while (strlen(temp) % 8 != 0) {
    //     strcat(temp, " ");
    // }

    // 加密数据
    encrypt(temp, 0);

    // 打印加密后的数据（十六进制格式）
    for (int i = 0; i < len; i++) {
        printf("%x ", (unsigned char)temp[i]);
    }
    printf("\n");

    // 解密数据
    encrypt(temp, 1);

    // 打印解密后的数据（十六进制格式）
    for (int i = 0; i < len; i++) {
        printf("%x", (unsigned char)temp[i]);
    }
    printf("[%s]\n",temp);

    return 0;
}