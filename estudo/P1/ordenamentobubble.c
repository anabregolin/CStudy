#include <stdio.h>

    int main(){
        int posicao, tamanho, i, temp;
        int *ptr1, *ptr2;

        int vetor[10] = {15, 7, 22, 12, 5, 44, 2, 1, 12, 0};

        tamanho = sizeof(vetor)/sizeof(int); //lembrar que precisa converter

        posicao = tamanho;

        while(posicao>0){
            ptr1 = &vetor[0]; //endereço 1° elemento
            ptr2 = &vetor[1];

            for(i=0; i<posicao; i++){ //compara elementos
                    if(*ptr1 > *ptr2){
                        temp = *ptr2;
                        *ptr2 = *ptr1;
                        *ptr1 = temp;
                    }
                    ptr1++; //apontar para próximo elemento
                    ptr2++;
            }
            posicao--;
        }

        for(i=0;i<tamanho;i++){
            printf("%d - ", vetor[i]);
        }

        return 0;
    }

    /*1° criar posição, tamanho, temporaria
    2° criar 2 ponteiros
    3° pegar size convertido para tamanho e levar para posicao
    4° while de posição > 0
    5° aponta para ponteiros posições iniciais de vetor
    6° for que compara ponteiros e, se ptr1 for maior, uso de temporaria
    7° incrementa ponteiros (são vetores nesse caso!)
    8° posição --
    9° for que printa vetor[i] organizado!
    */