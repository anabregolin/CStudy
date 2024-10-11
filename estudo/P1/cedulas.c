#include <stdio.h>
#include <locale.h>

    int main(){
        int saque; //395
        int cel100, cel50, cel20, cel10, cel5, resto;

        setlocale(LC_ALL, "");

        //100, 50, 20, 10, 5

        printf("Insira o valor a ser sacado: \n");
        scanf("%d", &saque);

    
        cel100 = saque/100;
        resto = (saque%100);

        cel50 = resto/50;
        resto = (resto%50);

        cel20 = resto/20;
        resto = (resto%20);

        cel10 = resto/10;
        resto = (resto%10);

        cel5 = resto/5;
        resto = (resto%5);

        printf("retorno: \n 100: %d \n 50: %d \n 20: %d \n 10: %d \n 5: %d \n", cel100, cel50, cel20, cel10, cel5);


        return 0;
    }