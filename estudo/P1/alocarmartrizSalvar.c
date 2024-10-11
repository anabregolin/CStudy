#include <stdio.h>

    struct Pixel{
        int R;
        int G;
        int B;

    }; //quando envolve imagem ppm, criar Pixel

/*
ler matriz de pixel de imagem usando alocação e slvar a mesma matriz
em um novo arquivo ppm
*/

    int main(){
        //declarar valores
        FILE *fp;
        fp = fopen("arquivo.ppm", "r");

        int c;
        char tipoImg[3];


        struct Pixel **M;
        int linha, coluna, valor, r, g, b;

        //le o cabeçalho
        fscanf(fp, "%s", tipoImg);
        fscanf(fp, "%d %d", &coluna, &linha);
        fscanf(fp, "%d", &valor);



        //alocar espaços de linhas M
        M = (struct Pixel**)malloc(linha*sizeof(struct Pixel*));


        //alocar elementos
        for(int i =0; i<linha; i++){
            M[i] = (struct Pixel*) malloc( linha *sizeof(struct Pixel));
        }

        //leitor dos valores pixel SÓ LE E COPIA, CUIDAR QUE NEM SEMPRE FAZ TUDO
        for(int i=0; i<linha; i++){
            for(int j=0; j<coluna; j++){
                fscanf(fp, "%d %d %d ", &r, &g, &b);
                M[i][j].R = r;
                M[i][j].G = g;
                M[i][j].B = b;

            }
        }

        //fecha arquivo, já pegou o que precisava copiar
        fclose(fp);


        //criação do novo ppt
        FILE * fp_novo;
        fp_novo = fopen("copia.ppm", "w");
        if(fp_novo == NULL){
            //... erro
        }


        //escrever cabeçalho
        fprintf(fp_novo, "P3\n");
        fprintf(fp_novo, "%d %d", &coluna, &linha);
        fprintg(fp_novo, "%d", valor);


        //escrever valores RGB
        for(int i=0; i<linha; i++){
            for(int j=0; j<coluna; j++){
                fprint(fp_novo, "%d %d %d", M[i][j].R, M[i][j].G, M[i][j].B);

            }
            fprint(fp_novo);
        }


        //fecha arquivo
        fclose(fp_novo);


        //libera memória alocada
        for(int i=0; i<linha; i++){
            free(M[i]);
        }
        free(M);



        return 0;
    }