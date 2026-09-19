#include <stdio.h>
#include <stdlib.h>

int main (void) {
    /*
    temos que usar o for pra percorrer o número correspondido
    e faze-lo como uma tabuada;
    */

    //inicializando;
    int num_tabuada;

    //Número perguntado;
    printf("Fale um número para fazermos a tabuada: \n");

    //Número sendo enviado;
    scanf("%d", &num_tabuada);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", num_tabuada, i, num_tabuada * i);
    }

}