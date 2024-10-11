#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura 'node' para a lista linear
typedef struct node {
    int nData;
    struct node *pLink;
} node;

// Definindo a estrutura 'descritor' para a lista linear
typedef struct {
    node *head; //descritor com head, tail e size
    node *tail;
    int size;
} descritor;

int main(void) {
    // Inicialização do descritor. Head = null, tail = null, size =0, sem alocação
    descritor list;
    list.head = NULL;
    list.tail = NULL;
    list.size = 0;

    // Criação dos nós
    node *pNode1 = (node *)malloc(sizeof(node));
    pNode1->nData = 10;
    pNode1->pLink = NULL;

    node *pNode2 = (node *)malloc(sizeof(node));
    pNode2->nData = 20;
    pNode2->pLink = NULL;

    node *pNode3 = (node *)malloc(sizeof(node));
    pNode3->nData = 30;
    pNode3->pLink = NULL;

    // Conectando os nós
    list.head = pNode1; //aloca descritor.head, descritor.tail
    list.tail = pNode3;

    pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;
    list.size = 3; //descritor.size

    // Código para utilizar a lista linear vai aqui

    // Liberação da memória
    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}
