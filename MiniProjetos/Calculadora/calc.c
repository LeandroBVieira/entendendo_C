#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    // Mini calculadora feita para testar meus conhecimentos;
    // Calcula todos os resultados possíveis;
    double num1, num2;

    // Primeiro Número:
    printf("Digite um Número: \n");
    scanf("%lf", &num1);

    // Segundo Número:
    printf("Digite outro Número: \n");
    scanf("%lf", &num2);

    // Imprimir os resultados possíveis:
    printf("a soma entre %.1lf e %.1lf é: %.1lf \n", num1, num2, num1 + num2);
    printf("a subtração entre %.1lf e %.1lf é: %.1lf \n", num1, num2, num1 - num2);
    printf("o produto entre %.1lf e %.1lf é: %.1lf \n", num1, num2, num1 * num2);
    printf("a divisão entre %.1lf e %.1lf é: %.1lf \n", num1, num2, num1 / num2);
    printf("o resto da divisão entre %.1lf e %.1lf é: %.1lf \n", num1, num2, fmod(num1, num2));

    return 0;
}
