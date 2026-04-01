#include <stdio.h>

int main() {
    int num = 100;

    // Void pointer can point to any data type
    void *ptr = &num;

    // Correct way - must cast before dereferencing
    printf("Value using void pointer = %d\n", *(int *)ptr);

    // Wrong ways (these will cause compile errors):
    // printf("%d\n", *ptr);           // Error - cannot dereference void*
    // double *dptr = &num;            // Error - type mismatch

    return 0;
}