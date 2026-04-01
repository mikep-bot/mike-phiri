#include <stdio.h>

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
    
    addNumber(arr);            // array name is address ? call by reference
    
    printf(">> After function call <<\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    // end of main
}