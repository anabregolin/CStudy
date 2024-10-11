//vários ponteiros com typedef


int soma(int a, int b)
{
    return a + b;
}

void mensagem1()
{
    printf("Mensagem 1.\n");
}

void mensagem2()
{
    printf("Mensagem 2.\n");
}

typedef int (*FuncaoSoma)(int, int);
typedef void (*FuncaoMsg)();

int main()
{
    FuncaoSoma ponteiro_soma;
    FuncaoMsg ponteiro_msg1;
    FuncaoMsg ponteiro_msg2;

    ponteiro_soma = soma;
    ponteiro_msg1 = mensagem1;
    ponteiro_msg2 = mensagem2;

    int resultado = ponteiro_soma(4,5);
    printf("Resultado da soma eh: %d \n", resultado);
    ponteiro_msg1();
    ponteiro_msg2();

    return 0;
}