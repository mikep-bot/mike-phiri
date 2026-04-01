#include <stdio.h>

// Function that attempts to swap two numbers (Call by Value)
void swap(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    // Changes are local only - original variables in main() are unaffected
}

int main() {
    int num1 = 10;
    int num2 = 50;

    printf(">> Before function call <<\n");
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n\n", num2);

    swap(num1, num2);        // Call by value - copies are passed

    printf(">> After function call <<\n");
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);

    return 0;
}