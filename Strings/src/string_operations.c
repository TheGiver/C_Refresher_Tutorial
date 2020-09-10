#include <stdio.h>
#include <string.h>

int main() {

    /* Defining a string for read only purposes */
    char * name = "Faysal";

    /* Initializing a string for manipulation purposes */
    char fullName[50] = "Faysal ";
    char lastName[9] = "Alkharaz";

    /* Concatenating the first and last name */
    strncat(fullName, lastName, 10);

    printf("%s \n", fullName);

    printf("Length of fullName is: %lu \n", strlen(fullName));

    return 0;
}