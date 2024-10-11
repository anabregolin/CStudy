#include <stdio.h>
#include <windows.h>

    void playsound(int freq, int tempo){
        Beep(freq, tempo);
    }

    int main(){
        int freq, tempo;

        while(1){ //infinito
            printf("\nInforme a frequencia e o tempo: ");
            scanf(" %d %d", &freq, &tempo);
            playsound(freq, tempo);

        }

        return 0;
    }