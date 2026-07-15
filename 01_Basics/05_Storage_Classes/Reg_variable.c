#include <stdio.h>

int main()
{
    register int x = 10;

    printf("Value of x = %d\n", x);

    // printf("%p", (void *)&x);   // Illegal: Cannot take address of register variable

    return 0;
}