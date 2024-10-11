#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura 'node' para a lista circular duplamente encadeada
typedef struct node {
    int nData;
    struct node *pNext;
    struct node *pPrev;
} node;

int main(void) {
    node *head = NULL;
    node *tail = NULL;

    // Criação dos nós
    node *pNode1 = (node *)malloc(sizeof(node));
    pNode1->nData = 10;
    pNode1->pNext = NULL;
    pNode1->pPrev = NULL;

    node *pNode2 = (node *)malloc(sizeof(node));
    pNode2->nData = 20;
    pNode2->pNext = NULL;
    pNode2->pPrev = NULL;

    node *pNode3 = (node *)malloc(sizeof(node));
    pNode3->nData = 30;
    pNode3->pNext = NULL;
    pNode3->pPrev = NULL;

    // Conectando os nós para formar um círculo
    head = pNode1;
    tail = pNode3;

    pNode1->pNext = pNode2;
    pNode2->pPrev = pNode1;

    pNode2->pNext = pNode3;
    pNode3->pPrev = pNode2;

    pNode3->pNext = pNode1;
    pNode1->pPrev = pNode3;

    // Código para utilizar a lista circular duplamente encadeada vai aqui

    // Liberação da memória (neste exemplo, é manual devido à natureza circular)
    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}
