#include <stdio.h>

int adder(int n1, int n2) {
    return n1 + n2;
} // end of adder

int main(void) {
    int (*fPtr)(int, int);   // Function pointer declaration
    fPtr = adder;            // Assign function address to pointer

    printf("Using a name of function : %d \n", adder(10, 20));
    printf("Using a function pointer : %d \n", fPtr(10, 20));
    printf("\n");
} // end of main