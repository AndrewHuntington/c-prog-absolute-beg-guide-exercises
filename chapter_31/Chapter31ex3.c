/* The program demonstrates passing a variable to a function by address. */

#include <stdio.h>

void half(int *i) // Receives the address of i
{
    *i = *i / 2;
    printf("Your value halved is %d.\n", *i);
}

int main()
{
    int i;

    printf("Enter an integer: ");
    scanf("%d", &i);

    // Now call the half function, passing the address of i
    half(&i);
    // Shows that the function changed the value of i
    printf("In main(), i is now %d.\n", i);

    return 0;
}