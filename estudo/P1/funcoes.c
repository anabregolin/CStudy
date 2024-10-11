#include <stdio.h>

    float soma(float a, float b){
        float soma;
        soma = a + b;
        return soma; //ou printf se for void
    }

    int main(){
        float a, b, resultado;
        printf("Insira os valores:");
        scanf(" %f %f", &a, &b);

        resultado = soma(a,b);

        printf("%.2f", resultado);

        return 0;
    }