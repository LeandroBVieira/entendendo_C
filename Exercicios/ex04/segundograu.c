#include <stdlib.h>
#include <stdio.h>
#include <math.h>

    // Feito para fazer um exercicio de segundo grau usando pow e sqrt da biblioteca math.h
    // sqrt -> raiz quadrada (square root)
    // pow -> potenciação
    // lembrando:
    // x = -b +- delta(raiz(b(2)-4.a.c)) / 2.a

int main (void) {
    // Entrada de Dados:
    
    double a, b, c, delta, x1, x2;
    a = 1;
    b = -5;
    c = 6;

    // Processamento de Dados:

    delta = (pow(b, 2)) - 4 * a * c;
    x1 = (-b  + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    //printf("%.0lf \n", delta); // ignore isto, feito um teste aqui!;
    // Saída de Dados:

    printf("as saídas de cada dado informado no sistema: \n");
    printf("a sendo %.0lf \n", a); // saída a;
    printf("b sendo %.0lf \n", b); // saída b;
    printf("c sendo %.0lf \n", c); // saída c; 
    printf("delta sendo %.0lf , \nlembrando que delta = b(2) - 4.a.c \n", delta); // saída delta
    printf("x sendo x = -b +- delta(raiz(b(2)-4.a.c)) / 2.a \n"); // saída x
    printf("x1 sendo com o sinal de maior, sendo %.0lf \n", x1); // saída x1;
    printf("x2 sendo com o sinal de menor, sendo %.0lf \n", x2); // saída x2;
    printf("Ou seja, as soluções encontradas foram s = {%.0lf, %.0lf}. \n",x1, x2 );
}