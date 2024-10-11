#include <stdio.h>

int main()
{
    unsigned char bin = 0b1100;
    unsigned char hex = 0x0c;

    printf("Binário: %hhu\n", bin);
    printf("Hexadecimal: %hhu\n", hex);

    //AND
    unsigned char and_result = bin & hex;
    printf("AND: %hhu\n", and_result); 

    return 0;
}