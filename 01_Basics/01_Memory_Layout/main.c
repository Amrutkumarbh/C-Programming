#include <stdio.h>
#include <stdlib.h>

int global = 100; // Initialized Global Variable
int global2;      // Uninitialized Global Variable

int main(void)
{
    int local = 10; // Local Variable (Stack)

    int *ptr = malloc(sizeof(int)); // Heap Memory
    *ptr = 50;

    printf("Global      : %p\n", (void *)&global);
    printf("Global2     : %p\n", (void *)&global2);
    printf("Local       : %p\n", (void *)&local);
    printf("Pointer     : %p\n", (void *)&ptr);
    printf("Heap Memory : %p\n", (void *)ptr);

    free(ptr);

    return 0;
}