//
// Created by zhangxin on 15-12-25.
//

#include <stdio.h>
#include <string.h>

int main() {
    int x = 1;
    int y = 2;
    int z = 3;
    printf("addr of x is %u, x = %d\n", &x, x);
    printf("addr of y is %u, y = %d\n", &y, y);
    printf("addr of z is %u, z = %d\n", &z, z);

    memset(&y, 0, 8);
    printf("\n");
    printf("after memset operation\n");
    printf("\n");

    printf("addr of x is %u, x = %d\n", &x, x);
    printf("addr of y is %u, y = %d\n", &y, y);
    printf("addr of z is %u, z = %d\n", &z, z);

}