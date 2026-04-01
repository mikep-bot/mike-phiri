#include <stdio.h>

void func1(void) {
    printf("func1 was called!\n");
} // end of func1

void func2(void) {
    printf("func2 was called!\n");
} // end of func2

// Function that returns a function pointer
void (*whatFunction(int sel))(void) {
    if (sel == 1)
        return func1;
    else if (sel == 2)
        return func2;
} // end of whatFunction

int main(void) {
    void (*fPtr)(void);

    fPtr = whatFunction(1);
    fPtr();                    // Calls func1

    fPtr = whatFunction(2);
    fPtr();                    // Calls func2

    printf("\n");
} // end of main