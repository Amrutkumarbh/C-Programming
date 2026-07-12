#include <stdio.h>

int *fun()
{
    int x = 50;

    return &x;
}

int main()
{
    int *ptr = fun();

    printf("%d", *ptr);

    return 0;
}