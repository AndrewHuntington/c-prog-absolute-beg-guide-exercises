/* The program demonstrates passing an array to a function. */

#include <stdio.h>
#include <string.h>

void change(char name[15])
{
    // Change the string stored at the address pointed to by name
    strcpy(name, "XXXXXXXXXXXXXX");
    return;
}

int main()
{
    char name[15] = "Michael Hatton";
    change(name);

    printf("Back in main(), the name is now %s.\n", name);
    return 0;
}