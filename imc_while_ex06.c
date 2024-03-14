//aula 14/3/24
#include <stdio.h>
#include <locale.h>

void main(void){

    float altura;
    float peso;
    float imc;
    char opcao;

    do{
        printf("\n\n--- Deseja calcular seu imc? (s/n)... ---\n");
        scanf("%s", &opcao);

        if(opcao == 'n'){
            break;

        }else if (opcao == 's'){

            printf("\nInsira sua altura: ");
            scanf("%f", &altura);
            printf("Insira seu peso: ");
            scanf("%f", &peso);

            imc = peso/(altura*altura);

            printf("\n\nCalculando...\n\n");

            setlocale(LC_ALL, "Portuguese");

                if(imc <= 16.9){
                    printf("Valor do imc: %.2f \nClassificação do imc: muito abaixo do peso.", imc);
                }
                if(imc >= 17 && imc < 18.5){
                    printf("Valor do imc: %.2f \nClassificação do imc: abaixo do peso.", imc);
                }else if (imc >= 18.5 && imc < 25){
                    printf("Valor do imc: %.2f \nClassificação do imc: peso ideal.", imc);
                }else if(imc >= 24.9 && imc < 30){
                    printf("alor do imc: %.2f \nClassificação do imc: levemente acima do peso.", imc);
                }else if (imc >= 29.9 && imc < 35){
                    printf("Valor do imc: %.2f \nClassificação do imc: obesidade grau I.", imc);
                }else if (imc >= 34.9 && imc < 41){
                    printf("Valor do imc: %.2f \nClassificação do imc: obesidade grau II.", imc);
                }else{
                    printf("Valor do imc: %.2f \nClassificação do imc: obesidade grau III.", imc);
                }

        }else{
            printf("\nOpção errada, tente novamente.");
            opcao = 's';
        }

    }while(opcao == 's');

}