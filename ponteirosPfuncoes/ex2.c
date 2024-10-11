/*
Uso do typedef para função sem parãmetro

Ele é uma palavra-chave de C qe cria um alias (nome alternativo)
para o tipo de dados existente

Facilita leitura do código e reutilização de tipos complexos

palavra-chave typedef é utilizada para definir novos nomes 
para tipos de dados existentes. Isso pode tornar o código mais 
legível, mais fácil de manter e pode ajudar a abstrair a 
complexidade de certos tipos de dados.
*/

#include <stdio.h>

void mensagem()
{
    printf("Mensagem :) \n");
}

//definindo meu ponteiro
//typedef tipo_dado novo_nome;
//tipedef int* intPtr;

typedef void(*FuncaoMensg)();

int main()
{
    //crio ponteiro com mesma definição
    FuncaoMensg ponteiro_mensagem;

    //apontar para função
    ponteiro_mensagem = mensagem;

    //chamar função
    ponteiro_mensagem();

    return 0;

}