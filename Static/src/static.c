#include <stdio.h>

/*
Defining a function that increments a variable by one. 
The condition is that the variable should be defined in the function and not 
outside but its value must be saved and incremented each time the function gets 
called. 
*/
static int increment() {
    static int count = 0; 
    count += 1;
    return count;
}

int main() {
    printf("Original Value: %d \n", increment());
    printf("Increment #1: %d \n", increment());
    printf("Increment #2: %d \n", increment());
    return 0;
}