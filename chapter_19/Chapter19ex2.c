#include <stdio.h>
#include <string.h>

int main()
{
    char city[15];
    // 2 chars for the state abbrev. and one for the null zero
    char st[3];
    char fullLocation[18];

    puts("What town do you live in? ");
    gets(city);

    puts("What state do you live in? (2-letter abbreviation) ");
    gets(st);

    // Concatenates the strings
    strcat(fullLocation, city);
    strcat(fullLocation, ", "); // Adds a comma and space between the city
    strcat(fullLocation, st);   // and the state abbreviation

    puts("\nYou live in ");
    puts(fullLocation);
    return 0;
}