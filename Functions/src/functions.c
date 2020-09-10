#include <stdio.h>

/* Declare a function that takes a value and multiplies it by 2 */
int doubleValue(int x);

int main() {
    int result = doubleValue(2);
    printf("%d \n", result);
    return 0;
}

int doubleValue(int x) {
    return x * 2;
}