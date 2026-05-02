#include <stdlib.h>
#include <stdio.h>

int main (void) {
    // TESTE FEITO PARA DAR ERRO, JÁ IREI AVISAR DE ANTEMÃO!
    int n1 = 12;
    printf("n1: %d \n", n1);

    printf("n1: %lf \n", n1);
    // irá dar erro aqui
    printf("n1: %f \n", n1);
    // irá dar erro aqui

    return 0;
};