#include <stdio.h>

/* Defining a struct that will represent a book */
struct Book {
    char * title;
    long book_id;

};

/* Defining a new struct of type point */
typedef struct {
    int x;
    int y;
} point;

/* Function to print details of Book */
static void printBookDetails(struct Book book) {
    printf("Book Details: \n");
    printf("Book Title: %s \n", book.title);
    printf("Book ID: %ld \n", book.book_id);
}

/* Function to print coordinates */
static void printCoordinates(point p) {
    printf("************************ \n");
    printf("x-coordinate: %d \n", p.x);
    printf("y-coordinate: %d \n", p.y);
} 

int main() {
    /* Creating book using the Book struct */
    struct Book book;
    book.title = "Hello World!";
    book.book_id = 1;

    /* Print the content of the book */
    printBookDetails(book);

    /* Create 2 coordinates */
    point point1;
    point point2;

    point1.x = 1;
    point1.y = 1;

    point2.x = 2;
    point2.y = 2;

    printCoordinates(point1);
    printCoordinates(point2);

    return 0;
}