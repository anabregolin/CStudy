#include <stdio.h>
#include <string.h>

    int main(){
        char msg1[] = "esta aula é PBN"; //tamanho 16, incluindo o nulo
        char msg2[20];
        const char msg3[] = "obaaaaaaaaaaa";
        char *ptr1 = msg1;
        char *ptr2 = msg2;
        char *ptr_aux = msg3;

        int tamanho;
        tamanho = strlen(ptr1);  //tamanho do vetor apontado por ptr1
        printf("Tamanho de msg1 é: %d\n", tamanho);

        strcpy(ptr2, ptr1); //copia para msg2, usa endereço

        printf("ptr2 aponta para: %s\n", ptr2);
        printf("primeiro caractere da string de ptr2 é: %c\n", *ptr2);

        strncat(ptr2, ptr_aux, 7);
        printf("A string apontada por ptr2 é: %s\n", ptr2);
        return 0;
    }