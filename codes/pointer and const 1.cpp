#include <stdio.h>

int main() {
    int num = 20;
    const int *ptr = &num;     // Pointer to constant integer

    // *ptr = 30;     // Error (X) - Cannot change value through pointer
    num = 40;          // Allowed (O) - Can change using variable name

    printf("num = %d\n", num);
    return 0;
}