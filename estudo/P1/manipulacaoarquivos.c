#include <stdio.h>

    int main(){
        int c;
        //abrir arquivo
        FILE * fp;
        fp = fopen("arquivo.txt", "w+");


        //verifica se foi aberto
        if(fp == NULL){
            printf("Erro ao abrir arquivo.\n");
            return 1;
        }


        //escrever algo no arquivo
        fprintf(fp, "%s", "Olá.\n");
        fprintf(fp, "%s", "Oi.\n");


        //fechar arquivo
        fclose(fp);


        //abrir arquivo para leitura
        fp = fopen("arquivo.txt", "r");


        //verificar se foi aberto com sucesso
        if(fp == NULL){
            printf("Erro ao abrir aquivo.\n");
            return 1;
        }


        //ler e exibir conteúdo do arquivo
        char linha[100];
        while(1){
            c = fget(fp);
            if(feof(fp)){ //quando for fim do arquivo, break;
                break;
            }

            printf("%c", c);
        }


        //fecahr arquivo
        fclose(fp);


        return 0;
    }