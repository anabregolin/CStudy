#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int mega[6], i, valor;
        int dezena = 0; //acompanha numeros 
        int valor_igual = 0; //ver se numero gerado existe 

        srand(time(NULL)); //números aleatórios em tempo real, cada execução produz diferente

        while(dezena<6){ //gerar os 6
            valor = rand()%61; //aleatorios de [0,60]

            for(i = 0; i < dezena; i++){ //verificar se numero gerado existe em mega
                if(mega[i] == valor){ //dezena é número atual de elementos gerados e inseridos
                    valor_igual = 1;
                    break;
                }
            }

            if(valor_igual == 0){ //aqui são adicionados
                mega[dezena] = valor;
                dezena++;
            }
        }

        for(i=0;i<6;i++){ //printar
            printf("O valor da mega eh: %d\n", mega[i]);
        }

        return 0;
    }

    /*1° criar mega e variáveis de valor, dezena e variavel igual
    2° setar srand(time(NULL))
    3° while
    4° valor recebe rand()%61
    5° for que verifica se numero está e, se sim, valor igual recebe 1
    6° adiciona em mega se for valor igual 0
    7° refaz while
    8° printa com for < 6, mega[i]
    */