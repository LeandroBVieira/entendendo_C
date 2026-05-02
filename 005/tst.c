#include <stdio.h>

int main (void) {
    // Feito para entender as casas decimais, tanto no float quanto no double:
    // Normalmente mostra Seis(6) casas decimais;

    float num = 12.5;
    // três casas
    printf("print: %.3f \n", num);
    // Duas casas
    printf("print: %.2f \n", num);
    // Uma casa
    printf("print: %.1f \n", num);
    // Casas Normais que vem juntas com o tipo Float;
    printf("print: %f \n", num);

    return 0;
}