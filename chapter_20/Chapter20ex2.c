#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int dice1, dice2;
    int total1, total2;
    time_t t;
    char ans;

    // Needed to make sure each random number is different
    srand(time(&t));

    // This would give you a number between 0 and 5, so the +1 makes it 1 to 6
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;
    printf("First roll of the dice was %d and %d, ", dice1, dice2);
    printf("for a total of %d.\n\n\n", total1);

    do
    {
        puts("Do you think the next roll with be ");
        puts("(H)igher, (L)ower, or (S)ame?\n");
        puts("Enter H, L, or S to reflect your guess.");

        scanf(" %c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // Second roll
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;

    printf("\nThe second roll was %d and %d, ", dice1, dice2);
    printf("for a total of %d.\n\n", total2);

    if (ans == 'L')
    {
        if (total2 < total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is lower than %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not lower than %d\n\n", total2, total1);
        }
    }
    else if (ans == 'H')
    {
        if (total2 > total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is higher than %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not higher than %d\n\n", total2, total1);
        }
    }
    else if (ans == 'S')
    {
        if (total2 == total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is the same as %d\n\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not the same as %d\n\n", total2, total1);
        }
    }

    return 0;
}