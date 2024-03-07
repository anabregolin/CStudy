//aula 7/3/24

#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

void main(void){
    int op;
    float p1;
    float p2;
    bool i = true;
    setlocale(LC_ALL, "Portuguese");
    
do{
    printf("\n--- MENU --- \n (0) SOMA \n (1) SUBTRAÇÃO ");
    printf("\n (2) MULTIPLICAÇÃO \n (3) DIVISÃO \n (4) SAIR \n Insira a operação que deseja realizar: ");
    scanf("%d" , &op);

    switch(op){
        case 0:
        printf("\n Informe a primeira parcela: ");
        scanf("%f", &p1);

        printf(" Informe a segunda parcela: ");
        scanf("%f", &p2);

        float soma = p1 + p2;
        printf(" O valor %.2f é a soma total. \n", soma);
        i = false;
        break;
        ///-----------

        case 1:
        printf("\n Informe a primeira parcela: ");
        scanf("%f", &p1);

        printf(" Informe a segunda parcela: ");
        scanf("%f", &p2);

        float sub = p1 - p2;
        printf(" O valor %.2f é a subtração total. \n", sub);
        i = false;
        break;
        ///-----------

        case 2:
        printf("\n Informe a primeira parcela: ");
        scanf("%f", &p1);

        printf(" Informe a segunda parcela: ");
        scanf("%f", &p2);

        float mult = p1 * p2;
        printf(" O valor %.2f é a multiplicação total. \n", mult);
        i = false;
        break; 
        ///-----------

        case 3:
        printf("\n Informe a primeira parcela: ");
        scanf("%f", &p1);

        printf(" Informe a segunda parcela: ");
        scanf("%f", &p2);

        float div = p1 / p2;
        printf(" O valor %.2f é a divisão total. \n", div);
        i = false;
        break;
        ///-----------

        case 4:
        printf("\n Saindo...\n");
        i = false;
        break;

        default:
        printf("\n ***Valor inválido, tente novamente.***\n");
        break;

    }
}while(i);
}
