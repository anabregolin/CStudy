#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura 'node' para a lista linear duplamente encadeada
typedef struct node {
    int nData;
    struct node *pNext;
    struct node *pPrev;
} node;

// Definindo a estrutura 'descritor' para a lista linear duplamente encadeada
typedef struct {
    node *head;
    node *tail;
    int size;
} descritor;

int main(void) {
    descritor list;
    list.head = NULL;
    list.tail = NULL;
    list.size = 0;

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

    // Conectando os nós
    list.head = pNode1;
    list.tail = pNode3;

    pNode1->pNext = pNode2;
    pNode2->pPrev = pNode1;

    pNode2->pNext = pNode3;
    pNode3->pPrev = NULL;

    list.size = 3;

    // Código para utilizar a lista linear duplamente encadeada com descritor vai aqui

    // Liberação da memória
    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}
