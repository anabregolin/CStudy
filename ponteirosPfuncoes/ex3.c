//ponteiro com parâmetro

#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    //declaração do ponteiro
    int (*ponteiro_soma)(int, int);

    //apontar
    ponteiro_soma = &soma;

    //chamar
    int resultado = ponteiro_soma(3,4);

    printf("Resultado da soma: %d\n", resultado);

    return 0;
}

