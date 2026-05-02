#include <stdio.h>
#include <stdlib.h>

int main (void) {
    // Mini calculadora feita para testar meus conhecimentos;
    // Calcula todos os resultados possíveis;
    int num1, num2;

    // Primeiro Número:
    printf("Digite um Número: \n");
    scanf("%d", &num1);

    // Segundo Número:
    printf("Digite outro Número: \n");
    scanf("%d", &num2);

    // Imprimir os resultados possíveis:
    printf("a soma entre %d e %d é: %.1d \n", num1, num2, num1 + num2);
    printf("a subtração entre %d e %d é: %.1d \n", num1, num2, num1 - num2);
    printf("o produto entre %d e %d é: %.1d \n", num1, num2, num1 * num2);
    printf("a divisão entre %d e %d é: %.1d \n", num1, num2, num1 / num2);
    printf("o resto da divisão entre %d e %d é: %.1d \n", num1, num2, num1 % num2);

    return 0;
}
