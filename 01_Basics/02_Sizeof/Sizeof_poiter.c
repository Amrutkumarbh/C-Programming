#include <stdio.h>

int main()
{
    int x = 10;

    int *ptr = &x;

    printf("sizeof(x)   = %zu\n", sizeof(x));

    printf("sizeof(ptr) = %zu\n", sizeof(ptr));

    printf("sizeof(*ptr)= %zu\n", sizeof(*ptr));

    return 0;
}