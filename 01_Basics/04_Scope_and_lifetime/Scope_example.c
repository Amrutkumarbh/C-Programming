#include <stdio.h>

int x = 10;

void fun()
{
    static int x = 20;

    {
        int x = 30;

        printf("%d ", x);
    }

    printf("%d ", x);
}

int main()
{
    printf("%d ", x);

    fun();

    printf("%d", x);

    return 0;
}