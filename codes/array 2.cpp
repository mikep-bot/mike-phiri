#include <stdio.h>

int main(void) {
    int arr[3] = {7, 14, 21};
    int *ptr = arr;          // ptr points to arr[0]
    
    printf("%d \n", ptr[1]); // prints 14
    printf("%d \n", arr[1]); // prints 14
    
    // end of main
}