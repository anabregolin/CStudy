#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura 'node' para a lista circular
typedef struct node {
    int nData;
    struct node *pLink;
} node;

int main(void) {
    // Inicialização da lista circular
    node *head = NULL;
    node *tail = NULL;

    // Criação dos nós
    node *pNode1 = (node *)malloc(sizeof(node));
    pNode1->nData = 10;

    node *pNode2 = (node *)malloc(sizeof(node));
    pNode2->nData = 20;

    node *pNode3 = (node *)malloc(sizeof(node));
    pNode3->nData = 30;

    // Conectando os nós para formar um círculo
    head = pNode1;
    tail = pNode3;

    pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;
    pNode3->pLink = head; // Fazendo a lista circular ao invés de NULL

    // Código para utilizar a lista circular vai aqui

    // Liberação da memória (neste exemplo, é manual devido à natureza circular)
    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}
