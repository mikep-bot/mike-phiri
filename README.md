# mike-phiri
# assignment-2
this assignment`s aim is to show how different codes works under different conditions


Here's a clean, professional, and well-structured single documentation file for all your C codes:
Markdown# C Pointers and Arrays - Complete Documentation


## 1. Pointer Basics

### 1.1 pointer.cpp
**Description:**  
Introduces the basic concept of pointers: declaring a pointer, assigning an address using `&`, and dereferencing using `*`.

**Key Concept:** Pointer declaration, address-of operator, dereference operator.

```c
#include <stdio.h>

int main(void) {
    char c = 'a';
    char *ptr = NULL;

    ptr = &c;

    printf("ptr : %p \n", (void *)ptr);
    printf("*ptr : %c \n\n", *ptr);

    return 0;
}

1.2 address.cpp
Description:
Shows how to print the memory address of a normal variable using the & operator.
Key Concept: Getting the address of a variable.
C#include <stdio.h>

int main(void){
    char c = 'a';
    
    printf("c : %c\n", c);
    printf("&c : 0x%0x\n\n", &c);
}

2. Pointer Arithmetic
2.1 add and sub to address.cpp
Description:
Demonstrates pointer arithmetic with char* (increments/decrements by 1 byte).
Key Concept: Pointer arithmetic depends on the size of the data type.
C#include <stdio.h>

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
2.2 add and sub to address 2.cpp
Description:
Same demonstration using int* (usually increments by 4 bytes).
Key Concept: Scale factor in pointer arithmetic.
C#include <stdio.h>

int main(void) {
    int num = 7;
    int *ptr = NULL;

    ptr = &num;

    printf("ptr-1 : %p \n", (void *)(ptr - 1));
    printf("ptr   : %p \n", (void *)ptr);
    printf("ptr+1 : %p \n\n", (void *)(ptr + 1));

    printf("size of data type : %lu \n\n", sizeof(num));

    return 0;
}

3. Arrays and Pointers Relationship
3.1 array.cpp
Description:
Shows that the array name acts as a pointer to the first element. Demonstrates equivalence between array subscript and pointer notation.
Key Concept: Array decay to pointer.
C#include <stdio.h>

int main(void) {
    int arr[3] = {7, 14, 21};
    
    printf("%d \n", arr[2]);     
    printf("%d \n", *(arr + 2)); 

    return 0;
}
3.2 array 2.cpp
Description:
Demonstrates that a pointer to an array can be used with the subscript operator [].
Key Concept: Pointer subscripting.
C#include <stdio.h>

int main(void) {
    int arr[3] = {7, 14, 21};
    int *ptr = arr;          // ptr points to arr[0]
    
    printf("%d \n", ptr[1]); 
    printf("%d \n", arr[1]); 
    
    return 0;
}
3.3 array 3.cpp
Description:
Shows that negative indexing is allowed when using pointers.
Key Concept: Pointer indexing (positive and negative).
C#include <stdio.h>

int main(void) {
    char tmp[5] = {1, 2, 3, 4, 5};
    char *arr = tmp + 4;     // arr now points to tmp[4]
    
    printf("%d \n", arr[-2]); // This is allowed! Prints 3
    
    return 0;
}

4. Passing Arrays to Functions
4.1 array 4.cpp
Description:
Demonstrates how arrays are passed to functions by reference (using pointer). Modifying the array inside the function affects the original array.
Key Concept: Call by reference using arrays/pointers.
C#include <stdio.h>

void addNumber(int *ptr) {     // receives address of array
    int i = 0;
    for(i = 0; i < 10; i++) {
        ptr[i] += 100;         // add 100 to each element
    }
}

int main(void) {
    int i = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf(">> Before function call <<\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    addNumber(arr);            // array name is address → call by reference
    
    printf(">> After function call <<\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

5. Function Pointers
5.1 function pointer1.cpp
Description:
Basic introduction to function pointers by printing their addresses.
Key Concept: Functions have addresses in memory.
C#include <stdio.h>

void funcOne(void) {
    printf("funcOne was called!\n");
}

void funcTwo(void) {
    printf("funcTwo was called!\n");
}

int main(void) {
    funcOne();
    funcTwo();

    printf("Address of funcOne : 0x%0x \n", funcOne);
    printf("Address of funcTwo : 0x%0x \n", funcTwo);
    
    return 0;
}
5.2 function pointer2.cpp
Description:
Declaring, assigning, and using a function pointer.
Key Concept: Function pointer syntax and usage.
C#include <stdio.h>

int adder(int n1, int n2) {
    return n1 + n2;
}

int main(void) {
    int (*fPtr)(int, int);   // Function pointer declaration
    fPtr = adder;            // Assign function address to pointer

    printf("Using a name of function : %d \n", adder(10, 20));
    printf("Using a function pointer : %d \n", fPtr(10, 20));
    
    return 0;
}
5.3 function pointer3.cpp
Description:
Passing a function pointer as a parameter to another function (callback pattern).
Key Concept: Function pointers as function arguments.
C#include <stdio.h>

int adder(int n1, int n2) {
    printf("Adder was called : ");
    return n1 + n2;
}

int divider(int n1, int n2) {
    printf("Divider was called : ");
    return n1 / n2;
}

void printResult(int n1, int n2, int (*fPtr)(int, int)) {
    printf("%d \n", fPtr(n1, n2));
}

int main(void) {
    printResult(10, 2, adder);
    printResult(10, 2, divider);

    return 0;
}
5.4 function pointer4.cpp
Description:
A function that returns a function pointer based on user selection.
Key Concept: Function returning a function pointer.
C#include <stdio.h>

void func1(void) { printf("func1 was called!\n"); }
void func2(void) { printf("func2 was called!\n"); }

// Function that returns a function pointer
void (*whatFunction(int sel))(void) {
    if (sel == 1)
        return func1;
    else if (sel == 2)
        return func2;
}

int main(void) {
    void (*fPtr)(void);

    fPtr = whatFunction(1);
    fPtr();                    

    fPtr = whatFunction(2);
    fPtr();                    

    return 0;
}

6. Const with Pointers
6.1 pointer and const 1.cpp
Description: Pointer to constant data (const int *).
C#include <stdio.h>

int main() {
    int num = 20;
    const int *ptr = &num;     // Pointer to constant integer

    // *ptr = 30;     // Error - cannot modify through pointer
    num = 40;          // Allowed - can modify using original variable

    printf("num = %d\n", num);
    return 0;
}
6.2 pointer and const 2.cpp
Description: Constant pointer (int * const).
C#include <stdio.h>

int main() {
    int num1 = 20;
    int *const ptr = &num1;    // Constant pointer

    *ptr = 40;         // Allowed - can change value
    // ptr = &num2;   // Error - cannot change pointer

    printf("Value pointed by ptr = %d\n", *ptr);
    return 0;
}
6.3 pointer and const 3.cpp
Description: Constant pointer to constant data (const int * const).
C#include <stdio.h>

int main() {
    int num1 = 10;
    const int *const ptr = &num1;   // Constant pointer to constant data

    // *ptr = 40;     // Error
    // ptr = &num2;   // Error

    printf("Value = %d\n", *ptr);
    return 0;
}

7. Void Pointer
7.1 void.cpp
Description: Demonstrates the use of a generic void* pointer.
Key Concept: Void pointer can point to any data type but must be cast before dereferencing.
C#include <stdio.h>

int main() {
    int num = 100;

    // Void pointer can point to any data type
    void *ptr = &num;

    printf("Value using void pointer = %d\n", *(int *)ptr);

    return 0;
}

8. Call by Value vs Call by Reference
8.1 swap function.cpp
Description: Shows that passing arguments by value does not affect the original variables.
Key Concept: Call by Value (default behavior in C).
C#include <stdio.h>

// Function that attempts to swap two numbers (Call by Value)
void swap(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    // Changes are local only
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
