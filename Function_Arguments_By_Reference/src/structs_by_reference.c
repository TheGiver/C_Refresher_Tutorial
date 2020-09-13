#include <stdio.h>

/* Struct of type person */
typedef struct {
    char * fullName; 
    int age; 
    unsigned long id;
}Person;

/* A function that will increment the age of the person by one */
static void birthday(Person * person) {
    person -> age++;
}

/* Print the info of a person */
static void printDetails(Person person) {
    printf("************************* \n");
    printf("Person Details: \n");
    printf("Full Name: %s \n", person.fullName);
    printf("Age: %d \n", person.age);
    printf("ID: %lu \n", person.id);
}

int main() {

    /* Create a person, print details, update age, print details again */
    Person faysal;
    faysal.fullName = "Faysal Alkharaz";
    faysal.age = 20;
    faysal.id = 170008764;

    printDetails(faysal);
    birthday(&faysal);
    printDetails(faysal);

    return 0;
}