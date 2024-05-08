/* This program takes the book info program from chapter 27 and writes the info to a file named BookInfo.txt */

#include "bookinfo.h"
#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main()
{
    int ctr;
    struct bookInfo bookInfo[3]; // Array of 3 structure variables

    // Get the information about each book from the user
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("What is the name of the book #%d?\n", (ctr + 1));
        gets(bookInfo[ctr].title);
        puts("Who is the author? ");
        gets(bookInfo[ctr].author);
        puts("How much did the book cost? ");
        scanf(" %f", &bookInfo[ctr].price);
        puts("How many pages in the book? ");
        scanf(" %d", &bookInfo[ctr].pages);
        getchar(); // Clears last newline for next loop
    }

    fptr = fopen("./BookInfo.txt", "w");

    // Test to ensure that the file opened
    if (fptr == 0)
    {
        printf("Error - file could not be opened.\n");
        exit(1);
    }

    // Print a header line and then loop through and print the info
    // to the file, but this time this printout will be in the file

    fprintf(fptr, "\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        fprintf(fptr, "#%d: %s by %s\n", (ctr + 1), bookInfo[ctr].title, bookInfo[ctr].author);
        fprintf(fptr, "It is %d pages and costs $%.2f\n", bookInfo[ctr].pages, bookInfo[ctr].price);
        fprintf(fptr, "\n\n");
    }
    fclose(fptr); // Always close your files

    return 0;
}