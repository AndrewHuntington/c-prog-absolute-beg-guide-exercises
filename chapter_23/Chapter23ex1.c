#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    srand(time(&t));

    // Fills the array with random numbers from 1 to 100
    for (ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }

    puts("\nHere is the list before the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // Sort the array w/ bubble sort
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    puts("\nHere is the list after the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    return 0;
}