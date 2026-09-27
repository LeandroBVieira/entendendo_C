#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int x, x1, x2;
    printf("digite os tres em sequencia: x, x1, x2 \n");
    scanf("%d %d %d", &x, &x1, &x2); 
    /*Lembrando: Aqui é case-sensitive, ou seja,
    o que botar no scanf além do que é pedido sera tratado pelo scanf como algo importante;
    é mais intuitivo colocar só o espaço pra ser mais interessante e respeitoso é claro, pra não quebrar o sistena ksks;
    */
    printf("%d, %d, %d \n", x, x1, x2);
}
