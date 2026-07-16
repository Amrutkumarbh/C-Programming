#include <stdio.h>

int main()
{
    unsigned char reg = 0x2D; // 00101101

    printf("Initial Register : 0x%X\n", reg);

    /* Set Bit 6 */
    reg |= (1U << 6);
    printf("Set Bit 6        : 0x%X\n", reg);

    /* Clear Bit 3 */
    reg &= ~(1U << 3);
    printf("Clear Bit 3      : 0x%X\n", reg);

    /* Toggle Bit 2 */
    reg ^= (1U << 2);
    printf("Toggle Bit 2     : 0x%X\n", reg);

    /* Check Bit 5 */
    if (reg & (1U << 5))
        printf("Bit 5 is SET\n");
    else
        printf("Bit 5 is CLEAR\n");

    return 0;
}