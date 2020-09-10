#include <stdio.h>

int main() {
    /* Defining an array of size 10 */
    int arr[10];

    /* Initialising an array with values 1 up to 10 */
    for(int i = 1; i <= 10; i++) {
        arr[i-1] = i;
    }

    /* Print the content of the array */
    for(int i = 0; i < 10; i++) {
        printf("--------------------------------- \n");
        printf("Value at index %d: \n", i);
        printf("%d \n", arr[i]);
    }

    return 0;
}