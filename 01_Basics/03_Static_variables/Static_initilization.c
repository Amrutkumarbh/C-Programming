#include <stdio.h>

void fun()
{
    static int x;

    printf("%d\n", x);

    x++;
}

int main()
{
    fun();
    fun();
    fun();
    fun();

    return 0;
}