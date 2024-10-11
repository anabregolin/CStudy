/*
A função soma() é chamada 100 vezes, o que pode reduzira a performance.
Usaremos uma macro SOMA(), eliminando as chamadas de função.

*/

#define SOMA(a,b)(a+b)

int soma(int a, int b)
{
    return (a+b);
}

int main()
{
    int i, res, a = 1;

    for(i=0; i<100; i++) //overhead
        res = soma(a,res);

    for(res = 0, i = 0; i<100; i++)
        res = SOMA(a, res);

}

/*
Toda vex que o compilador encontra SOMA(a,b), ele substitui por (a+b)
*/

/*
PROBLEMAS NO USO DE MACRO

Macro: não respeita escopo e não faz verificação de tipos. Colisão de nomes
ou quandoa rgumentos têm efeitos colaterais (SOMA(x++,y)), pode causar 
resultados inesperados


Função: respeita escopo e faz verificação de tipos. Argumentos avaliados antes
da execução da função


*/