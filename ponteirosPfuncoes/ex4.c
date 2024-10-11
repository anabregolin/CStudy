//typedef com parâmetros

#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

typedef int (*FuncaoSoma)(int,int);

int main()
{
    FuncaoSoma ponteiro_soma;

    ponteiro_soma = soma;

    int resultado = ponteiro_soma(3,4);

    printf("Resultado da soma eh: %d\n", resultado);

    return 0;
}