#include <stdio.h>
#include <stdlib.h>

int global = 100; // Data Segment
int global2;      // BSS Segment

int main(void)
{
    int local = 10;                 // Stack
    int *ptr = malloc(sizeof(int)); // Heap

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 50;

    printf("Memory Layout of a C Program\n");
    printf("---------------------------\n\n");

    printf("Global Initialized : %p\n", (void *)&global);
    printf("Global Uninitialized : %p\n", (void *)&global2);
    printf("Local Variable : %p\n", (void *)&local);
    printf("Pointer Variable : %p\n", (void *)&ptr);
    printf("Heap Memory : %p\n", (void *)ptr);

    free(ptr);

    return 0;
}