/**
 * 
 * `lcong48` 是一个库函数，用于设置线性同余生成器（linear congruential generator）的种子值。线性同余生成器是一种用于生成伪随机数的算法。
    `lcong48` 函数接受一个包含7个 `unsigned short` 元素的数组作为参数。这个数组的前三个元素用于设置线性同余生成器的乘数，接下来的三个元素用于设置加数，最后一个元素用于设置初始种子值。

    以下是一个使用 `lcong48` 函数的例子：



    在这个例子中，我们首先设置了线性同余生成器的种子值，然后使用 `lrand48` 函数生成了10个伪随机数。
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned short seed[7] = {12345, 12345, 12345, 12345, 12345, 12345, 12345};
    lcong48(seed);

    for (int i = 0; i < 10; i++) {
        printf("%ld\n", lrand48());
    }

    return 0;
}