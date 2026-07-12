#include <stdio.h>

int x = 100;

void fun()
{
    static int x = 200;

    printf("Static = %d\n", x);
}

int main()
{
    printf("Global = %d\n", x);

    fun();

    printf("Global = %d\n", x);

    return 0;
}