#include <stdio.h>
#include <stdlib.h>

struct node{
    int nData;
    struct node *pLink;
};

//printar nó
void mostra(struct node *p)
{
    printf("Mostrando a lista: \n");
    if(p){
        do{
            printf("%d\n", p->nData);
            p = p->pLink;  //ir para o próximo dado até ser null
        }while(p);
    }
    else    printf("Lista vazia.");
}

int main(void){
    struct node *head = NULL;
    struct node *tail = NULL;
    struct node *pNode1 = NULL;
    struct node *pNode2 = NULL;
    struct node *pNode3 = NULL;

    //criando nós e associando dados

    pNode1 = (struct node*)malloc(sizeof(struct node));
    pNode1->nData = 10;

    pNode2 = (struct node*)malloc(sizeof(struct node));
    pNode2->nData = 20;
    
    pNode3 = (struct node*)malloc(sizeof(struct node));
    pNode3->nData = 30;

    //conectando os nós
    head = pNode1;
    tail = pNode3;

    pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;
    pNode3->pLink = NULL; //circular aponta para head

    //mostrando
    if(pNode1){
        mostra(pNode1);
    }

    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}

