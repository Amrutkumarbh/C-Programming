#include <stdio.h>

int main()
{
    int arr[10];

    printf("Array Size = %zu bytes\n", sizeof(arr));

    printf("Elements = %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}