#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, aSize;
    int *randomNums; // Pointer to the array of random numbers
    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("How many random numbers do you want in your array? ");
    scanf("%d", &aSize);

    // malloc() always returns a void pointer, so we need to typecast it
    randomNums = (int *)malloc(aSize * sizeof(int));

    // Check if the memory allocation was successful
    // malloc() will return NULL (or 0) if it was not successful
    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }

    for (i = 0; i < aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }

    biggest = 0;
    smallest = 500;

    for (i = 0; i < aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total) / ((float)aSize);
    printf("This biggest random number is %d\n", biggest);
    printf("This smallest random number is %d\n", smallest);
    printf("The average of all the random numbers is %.2f\n", average);

    // When you use malloc(), you need to use free() to deallocate the memory
    free(randomNums);

    return 0;
}