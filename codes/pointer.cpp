#include <stdio.h>

int main(void) {
    char c = 'a';
    char *ptr = NULL;

    ptr = &c;

    printf("ptr : %p \n", (void *)ptr);
    printf("*ptr : %c \n\n", *ptr);

    return 0;
}