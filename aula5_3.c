#include <stdio.h>
#include <locale.h>

void main(void){

    char nome[20];
    float altura;
    float peso;
    float imc;

    printf("Insira o seu nome: ");
    scanf("%s", nome);
    printf("Insira sua altura: ");
    scanf("%f", &altura);
    printf("Insira seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    printf("\n\nCalculando...\n\n");

    setlocale(LC_ALL, "Portuguese");

    if(imc <= 16.9){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: muito abaixo do peso.",
        nome, imc);
    }
    if(imc >= 17 && imc < 18.5){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: abaixo do peso.",
        nome, imc);
    }else if (imc >= 18.5 && imc < 25){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: peso ideal.",
        nome, imc);
    }else if(imc >= 24.9 && imc < 30){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: levemente acima do peso.",
        nome, imc);
    }else if (imc >= 29.9 && imc < 35){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: obesidade grau I.",
        nome, imc);
    }else if (imc >= 34.9 && imc < 41){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: obesidade grau II.",
        nome, imc);
    }else{
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: obesidade grau III.",
        nome, imc);
    }

    printf("\n\n");
}