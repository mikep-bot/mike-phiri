#include <stdio.h>

int main(void) {
    int arr[3] = {7, 14, 21};
    
    printf("%d \n", arr[2]);     // prints 21
    printf("%d \n", *(arr + 2)); // prints 21
    
    // end of main
}