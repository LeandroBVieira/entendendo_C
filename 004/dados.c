#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main (void) {

    // Inteiros a seguir:
    int i = 12;
    printf("%d\n", i);

    // Bool´s a seguir:
    bool b = false;
    printf("falso é: %d\n", b);
    bool o = true;
    printf("verdadeiro é: %d\n", o);

    // float a seguir:
    float f = 98.32;
    printf("float: %.2f\n", f);

    // Double a seguir:
    double d = 45.23;
    printf("double: %lf\n", d);
    
    // Com uma casa decimal:
    printf("double: %.1lf\n", d);

    printf("double: %lf\n", d);

    // Charset a seguir:
    char c = 63;

    // Mostra em Decimal
    printf("char: %d\n", c);
    
    // Mostra em char
    printf("char: %c\n", c);
    
    return 0;
}