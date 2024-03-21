## AES介绍

对称加密，用什么加密就用什么解密

支持三种密钥长度 `16字节(128位)`  `24字节(192位)` `32字节(256位)`

**比如**

```c
unsigned char key[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
```

## 加密步骤

需要提前定义好AES_KEY的结构体

```c
AES_KEY aes_key;
```

初始化加密的密钥

```c
AES_set_encrypt_key(key, 256, &aes_key);
```

加密的字符长度要求为16的倍数，因为AES只对16个字符加密

```c
unsigned char text[1024] = "天上的星星";
size_t rowSize=strlen((char *)text);


  //加密字符的长度要为16的倍数,AES只加密16个字符
while(!(rowSize %16)){ 
      strcat((char*)text," "); 
      rowSize=strlen((char *)text) ;
}
```

加密完16个字符，就加密下16个

```c
for(int i=0;i<rowSize; i +=16){ //AES只加密16个字节 
        AES_encrypt(&text[i], &enc_out[i], &aes_key);
    }
```

## 揭秘步骤

定义好揭秘的AES_KEY结构体

```
AES_KEY aes_key;
```

初始化结构体

```c
unsigned char key[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f}; //要和加密的字符一样啊

AES_set_decrypt_key(key, 256, &aes_key);
```

揭秘

```
for(int i=0;i<rowSize; i +=16){ //每16个字节解谜
        // AES_encrypt(text[i], enc_out[i], &aes_key);
        AES_decrypt(&enc_out[i], &dec_out[i], &aes_key);
    }
    #AES_decrypt(int,out,AES_KEY_pointer);
  
    in 和out可以是同一个位置
```

## Makefile

```makefile
open_path=/opt/homebrew/Cellar/openssl@3/3.2.1
include_dir = $(open_path)/include
lib_dir = $(open_path)/lib
lib_name = crypto 



cflags =  -std=c11 -I$(include_dir) -L$(lib_dir) -l$(lib_name)


all: aes.out

%.out: %.c
	gcc $<  $(cflags) -o $@

clean:
	rm *.out 
.PHONY:clean


```

## CMake

```cmake
cmake_minimum_required(VERSION 3.10)
project(MyProject C)

set(CMAKE_C_STANDARD 11)

# OpenSSL path
set(OPENSSL_ROOT_DIR /opt/homebrew/Cellar/openssl@3/3.2.1)

find_package(OpenSSL REQUIRED)

add_executable(aes_test.out test/testaes.c)
target_include_directories(aes_test.out PRIVATE ${OPENSSL_INCLUDE_DIR})
target_link_libraries(aes_test.out PRIVATE OpenSSL::Crypto)




```
