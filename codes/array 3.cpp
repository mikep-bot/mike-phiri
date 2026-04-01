#include <stdio.h>

int main(void) {
    char tmp[5] = {1, 2, 3, 4, 5};
    char *arr = tmp + 4;     // arr now points to tmp[4] (value 5)
    
    printf("%d \n", arr[-2]); // This is allowed! Prints 3
    
    // end of main
}