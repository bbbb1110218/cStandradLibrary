#include <stdio.h>
#include <string.h>
#include <openssl/aes.h>

int main(void ) {
    AES_KEY aes_key;
    unsigned char key[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
    unsigned char text[16] = "hello,hiitt!";
    unsigned char enc_out[16];
    unsigned char dec_out[16];

    // 设置加密密钥
    AES_set_encrypt_key(key, 256, &aes_key);

    // 加密
    AES_encrypt(text, enc_out, &aes_key);

    // 打印加密后的数据（十六进制格式）
    for (int i = 0; i < 16; i++) {
        printf("%02x", enc_out[i]);
    }
    printf("\n");

    // 设置解密密钥
    AES_set_decrypt_key(key, 256, &aes_key);

    // 解密
    AES_decrypt(enc_out, dec_out, &aes_key);

    // 打印解密后的数据
    printf("%s\n", dec_out);

    return 0;
}
