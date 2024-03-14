//aula 11/03/24
#include <stdio.h>

void main(void){
int x;
int ced100, ced50, ced20, ced5, resto;

printf("Insira um valor x de reais para trocar as notas: ");
scanf("%d", &x);

    ced100 = x/100;
    resto = (x%100);

    ced50 = resto/50; //(x%100)/50
    resto = (resto%50);

    ced20 = resto/20; //((x%100)%50)/20
    resto = (resto%20);

    ced5 = resto/5;
    resto = (resto%5);

    printf("--- RETORNO ---\n (%d) 100\n (%d) 50\n (%d) 20\n (%d) 5\n", ced100, ced50, ced20, ced5);

    if(resto == 0){
        printf("Não houve retorno.\n");
    }else{
        printf("Houve um resto de %d. \n", resto);
    }
    
}
