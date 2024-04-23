#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[] = "C is fun";

    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]);
    }
    putchar('\n');

    return (0);
}