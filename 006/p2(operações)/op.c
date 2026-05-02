#include <stdio.h>
#include <stdlib.h>

int main (void) {
    // Feito para entender as Operações aritméticas feitas em C;
    int num1, num2;
    int soma, subtracao, produto,divisao, resto;

    num1 = 10;
    num2 = 5;

    soma = num1 + num2;
    subtracao = num1 - num2;
    produto = num1 * num2;
    divisao = num1 / num2;
    resto = num1 % num2;

    // Imprimir:
    printf("soma: %d \n", soma);
    printf("subtração: %d \n", subtracao);
    printf("produto: %d \n", produto);
    printf("divisão: %d \n", divisao);
    printf("resto divisao: %d \n", resto);


    return 0;
}