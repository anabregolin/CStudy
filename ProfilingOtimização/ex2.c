/*
Etapa 1: compilando com suporte profiling. Compilamos com a flag
-pg para habilitar o profiling:
    gcc -pg -o programa original.c

Etapa 2: executando o programa e gerando o perfil. Executamos
o programa para gerar o arquivo de perfil gmon.out

Etapa 3: analisando o perfil com gprof
    gprof programa gmon.out > perfil.txt

    no resultado, aparece que time = 90.00 em matrizes, 90%



OTIMIZADO

*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 500
void multiplica_matrizes_otimizado(int A[TAMANHO][TAMANHO], int B[TAMANHO][TAMANHO], int C[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            C[i][j] = 0;
            for (int k = 0; k < TAMANHO; k += 2) { // Loop unrolling
                C[i][j] += A[i][k] * B[k][j];
                C[i][j] += A[i][k + 1] * B[k + 1][j];
            }
        }
    }
}

int main() {
    int (*A)[TAMANHO] = malloc(sizeof(int[TAMANHO][TAMANHO]));
    int (*B)[TAMANHO] = malloc(sizeof(int[TAMANHO][TAMANHO]));
    int (*C)[TAMANHO] = malloc(sizeof(int[TAMANHO][TAMANHO]));

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    multiplica_matrizes_otimizado(A, B, C);

    printf("C[0][0] = %d\n", C[0][0]);

    free(A);
    free(B);
    free(C);

    return 0;
}

/*
    Agora, repita as etapas e verifique novamente:

    gcc -pg -o programa optimizado otimizado.c

    ./programa_optizado

    gprof programa_optimizado gmon.out > perfil_optimizado.txt

    reduziu para 80%

    LEMBRAR:
    gcc
    arquivo
    gprof
*/