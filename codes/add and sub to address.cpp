#include <stdio.h>

int main(void) {
    char c = 'a';
    char *ptr = NULL;

    ptr = &c;

    printf("ptr-1 : %p \n", (void *)(ptr - 1));
    printf("ptr   : %p \n", (void *)ptr);
    printf("ptr+1 : %p \n\n", (void *)(ptr + 1));

    printf("size of data type : %lu \n\n", sizeof(c));

    return 0;
}