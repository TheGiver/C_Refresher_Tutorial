#include <stdio.h>

/* A function that will take a pointer to a variable called increment and increment its value */
static void incrementVariable(int * pointer) {
    /* Dereference the value */
    *pointer += 1;
}

int main() {
    /* A variable in which its value will keep on incrementing */
    int increment = 0; 

    /* A pointer to the increment variable */
    int * incrementPointer = &increment; 

    incrementVariable(incrementPointer);
    printf("function call #1: %d \n", increment);

    incrementVariable(incrementPointer);
    printf("function call #2: %d \n", increment);  

    return 0;
}