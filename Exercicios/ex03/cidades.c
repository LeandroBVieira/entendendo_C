#include <stdlib.h>
#include <stdio.h>
#include <math.h>

    // Exercio cio de cidade, de Ubêrlandia para São José dos Campos(SP);
int main (void) {
    // Dados
    int distancia, velocidade_media, horario_saida, horario_chegada;
    double tempo_gasto;
    printf("Bora ir para São José dos Campos(SP) \n");

    // Processamento e Entrada de Dados:
    distancia = 649;
    velocidade_media = 85;
    horario_saida = 13;
    tempo_gasto = trunc(distancia / velocidade_media);

    // Uma observação:
    // Aqui no tempo gasto, ele fica como 7,6 na calculadora, ele seria float, mas como irei utilizar só int, deixei ele int mesmo;
    horario_chegada = horario_saida + tempo_gasto;

    // Imprimir:
    printf("Parabéns Você chegou ao seu destino \n");
    printf("Você veio de Ubêrlandia as %dh \n", horario_saida);
    printf("Você chegou em São josé dos campos(SP) ás %dh, foi cerca de %.0f horas de viagem \n", horario_chegada, tempo_gasto);

};