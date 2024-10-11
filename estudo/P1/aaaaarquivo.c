#include <stdio.h>

    int main(){

        //abrindo file
        FILE* fp;
        fp = fopen("arquivo.ppm", "r");

        FILE* fp_2;
        fp_2 = fopen("arquivo2.ppm", "w");

        //leitura de cabeçalho
        char c[100];
        while(1){
            c =  fget(fp);
            if(feof(fp)){
                break;
            }
            printf("%s", c);
        }

        //escrever algo
        fprintf(pf, "%d %d %d", teste, teste1, teste2;)

        fclose(fp);


        return 0;
    }