#include <stdio.h>

    int main(){
        char opcao = 's';

        while(opcao == 's'){
            printf("Informe 's' ou 'n': \n"); //esse loop gera problema com o enter
            opcao = getch();  //ler um único char, não deixa inserir <enter>
            printf("%c\n", opcao);

        }
        printf("Fim.\n");

        do{
            printf("Do-while,'s' ou 'n'\n");
            opcao = getch();
            printf("%c\n", opcao);

        }while(opcao == 's');
        printf("Fim.");

        return 0;
    }