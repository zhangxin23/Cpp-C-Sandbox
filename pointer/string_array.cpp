#include <stdio.h>
#include <string.h>

int main() {
    const char* str = "0123456789";
    size_t len = strlen(str);
    for(size_t i = 0; i < len; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
    for(size_t i = len - 1; i != 0; i--)
        printf("%c ", str[i]);
    printf("\n");
}
