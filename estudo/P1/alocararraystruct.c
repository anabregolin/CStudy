#include <stdio.h>

    struct Pixel{
        int R;
        int G;
        int B;

    };

    int main(){
        //delcarações
        struct Pixel **M;
        int linha = 700, coluna = 700;


        //alocar linhas da matriz
        M = (struct Pixel **) malloc(linha * sizeof(struct Pixel*));
        

        //alocar espaço de matriz
        for(int i=0; i<linha; i++){
            M = (struct Pixel*) malloc(linha * sizeof(struct Pixel));
            if(M[0] == NULL){
                printf("Erro ...");

                for(int i =0; i<linha;i++){
                    for(int j=0; j<1; j++){
                        free(M[i][j]);
                    }
                }
                free(M);
                return 1;
            }
        }

        //preenchimento da matriz
        for(int i=0; i<linha; i++){
            for(int j=0; j<coluna; i++){
                printf("Preencha os valores de RGB: ");
                scanf("%d %d $d \n", &M[i][j].R, &M[i][j].G, & M[i][j].B);
            }
        }

        //leitura da matriz
        for(int i=0; i<linha; i++){
            for(int j=0; j<coluna; j++){
                printf("%d \t", M[i][j]);
            }
        }

        //liberação da matriz
        for(int i=0; i<linha; i++){
            free(M[i]);
        }
        free(M);

        return 0;
    }