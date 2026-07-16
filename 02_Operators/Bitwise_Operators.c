#include <stdio.h>

int main()
{
    unsigned char a = 5; // 00000101
    unsigned char b = 3; // 00000011

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", (unsigned char)~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}