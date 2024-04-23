#include <stdio.h>

int main()
{
    int crt = 0;

    // prefix increment & decrement counters
    // computes before everything else
    printf("Counter is at %d.\n", ++crt); // 1
    printf("Counter is at %d.\n", ++crt); // 2
    printf("Counter is at %d.\n", ++crt); // 3
    printf("Counter is at %d.\n", ++crt); // 4
    printf("Counter is at %d.\n", ++crt); // 5

    printf("Counter is at %d.\n", --crt); // 4
    printf("Counter is at %d.\n", --crt); // 3
    printf("Counter is at %d.\n", --crt); // 2
    printf("Counter is at %d.\n", --crt); // 1

    crt = 0;

    // postfix increment & decrement counters
    // computes after everything else on the line finishes
    printf("Counter is at %d.\n", crt++); // 0 then increment
    printf("Counter is at %d.\n", crt++); // 1 then increment
    printf("Counter is at %d.\n", crt++); // 2 then increment
    printf("Counter is at %d.\n", crt++); // 3 then increment
    printf("Counter is at %d.\n", crt++); // 4 then increment

    printf("Counter is at %d.\n", crt--); // 5 then decrement
    printf("Counter is at %d.\n", crt--); // 4 then decrement
    printf("Counter is at %d.\n", crt--); // 3 then decrement
    printf("Counter is at %d.\n", crt--); // 2 then decrement

    return 0;
}