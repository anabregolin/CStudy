#include <stdio.h>
#include <string.h>

    float calcula_imc(float peso, float altura);
    void classifica_imc(float imc);

    char classifica[50];

    int main(){
        char op;

        do{
            printf("Deseja calcular imc? \n");
            op = getch();
            printf("%c", op);

            if(op == 's'){
                float peso, altura;

                printf("\nInsira o peso e altura: ");
                scanf(" %f %f", &peso, &altura);

                float imc = calcula_imc(peso,altura);
                printf("%.2f\n", imc);

                classifica_imc(imc);

                printf("%s\n", classifica);


            }


        }while (op == 's');


        return 0;
    }

    float calcula_imc(float peso, float altura){
        printf("\nCalculando imc...\n\n");
        float imc;
        imc = peso/(altura*altura);
        return imc;
    }

    void classifica_imc(float imc){
        if(imc<=15){
            strcpy(classifica, "Ta ok.");
        }else if(imc>15){
            strcpy(classifica,"Gordão.");
        }else{
            strcpy(classifica, "Além.");
        }
    }