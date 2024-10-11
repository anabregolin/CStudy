#include <stdio.h>

int main()
{
    unsigned char a = 0b1100; //12
    unsigned char b = 0b1010; //10

    //AND
    unsigned char and_result = a & b; //%u, mas ideal é %hhu
    printf("AND: %hhu\n", and_result); //8 (0b1000)

    //OR
    unsigned char or_result = a | b;
    printf("OR: %u\n", or_result); //14 (0b1110)

    //XOR
    unsigned char xor_result = a ^ b;
    printf("XOR: %u\n", xor_result); //6 (0b0110)

    //NOT
    unsigned char not_a = ~a;
    printf("NOT A: %u\n", not_a); //243 (0b11110011)

    return 0;

}