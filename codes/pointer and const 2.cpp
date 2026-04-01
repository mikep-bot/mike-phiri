#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 30;
    int *const ptr = &num1;    // Constant pointer

    *ptr = 40;         // Allowed (O) - Can change the value it points to
    // ptr = &num2;   // Error (X) - Cannot change the pointer itself

    printf("Value pointed by ptr = %d\n", *ptr);
    return 0;
}