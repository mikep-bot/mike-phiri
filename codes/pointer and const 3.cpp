#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 50;
    const int *const ptr = &num1;   // Constant pointer to constant data

    // *ptr = 40;     // Error (X)
    // ptr = &num2;   // Error (X)

    printf("Value = %d\n", *ptr);
    return 0;
}