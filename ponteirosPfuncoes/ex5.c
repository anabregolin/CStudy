//ponteiro para várias funções - com e sem parâmetros

#include <stdio.h>

int soma(int a, int b)
{ 
    return a + b;
}

void mensagem1(){
    printf("Mensagem 1. \n");
}

void mensagem2(){
    printf("Mensagem 2. \n");
}

int main(){
    int (*ponteiro_soma)(int, int);
    void (*ponteiro_msg1)();
    void (*ponteiro_msg2)();

    ponteiro_soma = soma; //define função
    ponteiro_msg1 = mensagem1;
    ponteiro_msg2 = mensagem2;

    int resultado = ponteiro_soma(4,5);
    printf("Resultado da soma eh: %d \n", resultado);

    ponteiro_msg1();
    ponteiro_msg2();

    return 0;
}