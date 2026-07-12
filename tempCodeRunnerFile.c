#include <stdio.h>

int *fun()
{
    int a = 50;
    return &a;
}

int main()
{
    int *p = fun();

    printf("%d\n", *p);

    return 0;
}