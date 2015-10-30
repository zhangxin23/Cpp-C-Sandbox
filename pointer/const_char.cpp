#include <stdio.h>
#include <string.h>

int main() {
    const char* str = "0123456789";
    while(*str != '\0') {
        printf("%c ", *str++);
    }
    printf("\n");

    const char* str_1 = "0123456789";
    char* str_tmp = (char*)str_1;
    //*(str_tmp + 1) = '9';
    //str_tmp[2] = '9';
    while(*str_tmp != '\0')
        printf("%c ", *str_tmp++);
    printf("\n");

    char str_arr[6] = {'1', '2', '3', '4', '5', '6'};
    for(int i = 0; i < 6; i++) {
        printf("%c ", str_arr[i]);
    }
    printf("\n");

    str_arr[2] = '9';
    for(int i = 0; i < 6; i++)
        printf("%c ", str_arr[i]);
    printf("\n");

    const char* str_null = "";
    printf("strlen(str_null) = %d\n", strlen(str_null));
}
