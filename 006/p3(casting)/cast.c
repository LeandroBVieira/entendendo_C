#include <stdio.h>
#include <stdlib.h>

    // Cast ou casting do inglês significa moldar, usado para moldar o resultado corretamente a sua variável coreespondida;
    // Quando copiarem suas linhas para baixo, revisem para ver se está tudo certo, quase tive um derrame aqui, por que pensei que tinha algo dado muito errado ksks;

int main (void) {
    int a, b;
    a = 7;
    b = 2;
    //
    float c = a / b;
    printf("print: %f \n", c);
    // Aqui teria que dar 3.5 mas deu 3.000 isso significa que, ele faz o resultado, mas como as variáveis são int, o resultado da int também,só que no estilo dado float;

    float d = (float)a / b;
    printf("print: %f \n", d);
    // Aqui trará o resultado corretamente;
}