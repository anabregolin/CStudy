//MULTIPLICAÇÃO DE MATRIZES

/*
NÃO OTIMIZADO

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 500

void multiplica_matrizes(int A[TAMANHO][TAMANHO], int B[TAMANHO][TAMANHO], int C[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            C[i][j] = 0;
            for (int k = 0; k < TAMANHO; k++) {
                C[i][j] += A[i][k] * B[k][j];
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
    multiplica_matrizes(A, B, C);

    printf("C[0][0] = %d\n", C[0][0]);

    free(A);
    free(B);
    free(C);

    return 0;
}
