#include <stdio.h>
#include <stdlib.h>

    // Feito para ver como comporta o char ao passar do índice superior;

int main (void) {
    int a = 300;
    char b = a;
    
    // Quando ele passa do índice superior, ele recomeça com o número atual até que ele chegue no número correspondido, no índice;
    // Esse resultado não dá 300, mas sim 44, por causa do índice;
    printf("%d \n", b);
    // No índice, na primeira repetição, no índice 173 existe o número 44, e quando o 300 chega no valor correspondente, ele chega no índice 173 que na primeira instância existe o 44;
    // È feito assim no índice:
    /*
    índice ->          |  1  |  2  | e vai indo até final que seria:| 255 |
    -------------------|-----------|                                |-----|
    número no char ->  |-127 |-126 |                                | 127 |
    */
}