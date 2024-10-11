#include <stdio.h>

int main()
{
    unsigned char a = 0b1100; //12

    //Deslocamento esquerda
    unsigned char left_shift = a << 2; //48 (0b110000)
    printf("Left shift A: %u\n", left_shift);

    //Deslocamento direita
    unsigned char right_shift = a >> 2; //3 (0b0011)
    printf("Right shift A: %u\n", right_shift);

    return 0;
}