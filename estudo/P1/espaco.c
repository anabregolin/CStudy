#include <stdio.h>
#include <locale.h>

int main(){
    int aux1, aux2;
    char op;

    setlocale(LC_ALL, "português");

    printf("Insira percela1, operação e parcela2: ");
    scanf(" %d %c %d", &aux1, &op, &aux2); //%c para char, %s para string
            //espaço antes  de tudo para ignorar espaços em branco antes de ler próximo caractete
    if(op == 'a'){
        printf("1");
    }

    printf("\n aux1: %d\n op: %c\n aux2: %d\n", aux1, op, aux2);

    return 0;
}