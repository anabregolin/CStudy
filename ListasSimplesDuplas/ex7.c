//SIMPLESMENTE ENCADEADA
#include <stdio.h>
#include <stdlib.h>

struct no{
    int nData;
    struct no *ptr_no;
}

int main()
{
    struct no *ptr_no1 = NULL;
    struct no *ptr_aux = NULL;

    ptr_no1 = (struct no*)malloc(sizeof(struct no));

    ptr_aux = ptr_no1;

    ptr_aux->ptr_no = (struct no*)malloc(sizeof(struct no));
    ptr_aux = ptr_aux -> ptr_no; //ptr_aux  

    return 0;

}