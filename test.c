#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This is always printed\n");
    }

    if (0)
    {
        printf("This is never printed\n");
    }

    return 0;
}