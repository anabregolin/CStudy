//aula 14/3/24
#include <stdio.h>
#include <locale.h>
#include <string.h>

float imcCalculo(float a, float b);
void classificacao(float a);

char class[50];

float imcCalculo(float a, float b){
    printf("\n\nCalculando...\n\n");
    float imc;
    imc = a/(b*b);
    return imc;
}

void classificacao(float a){
    if(a <= 16.9){
        strcpy(class, "Classificação do imc: muito abaixo do peso.");
    }
    if(a >= 17 && a < 18.5){
        strcpy(class,"Classificação do imc: abaixo do peso.");
    }else if (a >= 18.5 && a < 25){
        strcpy(class, "Classificação do imc: peso ideal.");
    }else if(a >= 24.9 && a < 30){
        strcpy(class, "Classificação do imc: levemente acima do peso.");
    }else if (a >= 29.9 && a < 35){
        strcpy(class, "Classificação do imc: obesidade grau I.");
    }else if (a >= 34.9 && a < 41){
        strcpy(class, "Classificação do imc: obesidade grau II.");
    }else{
        strcpy(class, "Classificação do imc: obesidade grau III.");
    }
}

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

            setlocale(LC_ALL, "Portuguese");

            imc = imcCalculo(peso, altura);
        
            classificacao(imc);
            printf("%s", class);
            
        }else{
            printf("\nOpção errada, tente novamente.");
            opcao = 's';
        }

    }while(opcao == 's');

}
