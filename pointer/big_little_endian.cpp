//
// Created by zhangxin on 15-12-25.
//

#include <stdio.h>

int main() {
    short a = 0x0010;
    char *c = (char *)&a;
    printf("c = %x\n", *c);
    if((a & 0x00FF) == *c)
        printf("little endian\n");

    if(((a >> 4) & 0x00FF) == *c)
        printf("big endian\n");
}