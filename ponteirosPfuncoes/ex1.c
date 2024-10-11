//para função, sem parâmetros

#include <stdio.h>


void mensagem()
{
    printf("Mensagem :) \n");
}

int main()
{
    void (*ponteiro_mensagem)(); //sem parâmetros.Crio ele

    ponteiro_mensagem = mensagem; //aponta para função

    ponteiro_mensagem(); //chama a função

    return 0;
}


