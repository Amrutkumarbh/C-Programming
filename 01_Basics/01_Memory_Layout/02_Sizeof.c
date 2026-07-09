#include <stdio.h>

int main(void)
{
    int a;
    char b;
    float c;
    double d;
    long e;
    short f;

    printf("int    : %zu bytes\n", sizeof(a));
    printf("char   : %zu bytes\n", sizeof(b));
    printf("float  : %zu bytes\n", sizeof(c));
    printf("double : %zu bytes\n", sizeof(d));
    printf("long   : %zu bytes\n", sizeof(e));
    printf("short  : %zu bytes\n", sizeof(f));

    return 0;
}