#include <stdio.h>
    typedef struct{
        int R;
        int G;
        int B;
    } RGB;


    int main(){
        RGB vetor[3][3];
        vetor[0][0].R = 130;
        vetor[0][0].G = 150;
        vetor[0][0].B = 120;

        printf("%d %d %d", vetor[0][0].R, vetor[0][0].G, vetor[0][0].B);


        //abertura de arquivo
        FILE * fp;
        fp = open("koala.ppm", "r");


        //leitura do formato da imagem
        int formato[3];

        fscanf(fp, "%s \n", &formato);
        printf("%s \n", formato);



        //leitura do tamanho da imagem
        int coluna, linha;

        fscanf(fp, "%d %d", &coluna, &linha);
        printf("%d %d\n", coluna, linha);


        //leitura do valor máximo por pixel
        int max;
        fscanf(fp, "%d \n", &max);
        printf("%d \n", max);

        return 0;


        //leitura de todos os pixels da imagem

        for(int i=0; i < linha; i++){
            for(int j=0; j<coluna; i++){
                fscanf(fp, "%d %d %d", &r, &g, &b);
                printf("%d %d 5d \n", r, g, b);
            }
        }


        //fechamento do arquivo
        fclose(fp);
    }