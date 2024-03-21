#include <stdio.h>
#include <string.h>
#include <openssl/aes.h>


/**
 * @note: 加密的数据字符的长度需要是16的倍数，如果不满足数据会被截断
 * 
 * @note:AES 支持三种密钥长度：128位（16字节）、192位（24字节）和256位（32字节）。
 *       每次加密的长度是16个字节，所以
 * 
 * 
*/

int main(void ) {
    AES_KEY aes_key;
    unsigned char key[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
    unsigned char text[1024] = "天上的星星";
    unsigned char enc_out[1024]={};
    unsigned char dec_out[1024]={};

    size_t rowSize=strlen((char *)text);


    //加密字符的长度要为16的倍数,AES只加密16个字符
    while(!(rowSize %16)){ 
        strcat((char*)text," "); 
        rowSize=strlen((char *)text) ;
    }


    // 设置加密密钥
    AES_set_encrypt_key(key, 256, &aes_key);


    for(int i=0;i<rowSize; i +=16){ //AES只加密16个字节 
        AES_encrypt(&text[i], &enc_out[i], &aes_key);
    }

    // 加密
    

    

    // 打印加密后的数据（十六进制格式）
    for (int i = 0; i < 16; i++) {
        printf("%02x", enc_out[i]);
    }
    printf("\n");

    // 设置解密密钥
    AES_set_decrypt_key(key, 256, &aes_key);

    // 解密
    for(int i=0;i<rowSize; i +=16){ //每16个字节解谜
        // AES_encrypt(text[i], enc_out[i], &aes_key);
        AES_decrypt(&enc_out[i], &dec_out[i], &aes_key);
    }
    

    // 打印解密后的数据
    printf("%s\n", dec_out);

    return 0;
}
