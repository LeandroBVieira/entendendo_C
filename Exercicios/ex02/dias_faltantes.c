#include <stdio.h>
#include <stdlib.h>

    // Exercício proposto:
    // Fazer um algoritmo na qual diga quantos dias faltam para o ano acabar

int main (void) {

    // Entrada de Dados:
    int dia, mes, dias_no_ano, dias_faltantes;

    // digitar e escanear:
    printf("Que dia é hoje? \n");
    scanf("%d", &dia);
    printf("Que mês é hoje? \n");
    scanf("%d", &mes);

    // Processamento de Dados:
    mes = (mes - 1) * 30; // Mês recebe 30 dias;
    dias_no_ano = 365;
    dias_faltantes = dias_no_ano - (dia + mes);

    // Imprimir:
    printf("faltam %d para o final do ano \n", dias_faltantes);
}