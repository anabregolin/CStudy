#include <stdio.h>

    int main(){
        //declarar matriz e coluna/linhas
        int **M;
        int coluna, linha;


        //alocação de memória para as linhas
        M = (int**) malloc(linha * sizeof(int *));


        // teste de alocação
        if(M == NULL){
            printf("Erro ao alocar memória para linhas de matriz.");
            return 1;
        }


        //alocação de memória para elementos das linhas
        for(int i=0; i<linha; i++){
            M[i] = (int *)malloc(coluna*sizeof(int));


            //teste de alocação
            if(M[i] == NULL){
            printf("Erro ao alocar memória para matriz");

            //liberar memória alocada
            for(int j =0; j<i;j++){
                free(M[i][j]);
            }
            free(M);

            return 1;
        }
        }


        //preenchimento da matriz
        for(int i=0; i<linha; i++){
            for(int j = 0; j<coluna; i++){
                scanf("%d \t", M[i][j]);
            }
        }


        //impressão da matriz
        for(int i=0; i<linha; i++){
            for(int j=0; j<coluna; i++){
                printf("%d \t", M[i][j]);
            }
            printf("\n");
        }


    //liberação de memória
        for(int i=0; i<linha; i++){
            free(M[i]);
        }
        free(M);

        return 0;
    }