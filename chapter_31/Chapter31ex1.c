/*
The program demonstrates passing a variable to a function by value.
*/

#include <stdio.h>

// Note: unlike the book, I had to move the function to be above main() and add `void` to avoid an error.
void half(int i) // Receives the value of i
{
    i = i / 2;
    printf("Your value halved is %d.\n", i);
    return; // Return to main
}

int main()
{
    int i;

    printf("Please enter an integer: ");
    scanf("%d", &i);

    // Now call the half function, passing the value of i

    half(i);

    printf("In main(), i is still %d.\n", i);

    return 0;
}