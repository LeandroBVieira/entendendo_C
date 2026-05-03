#include <stdio.h>
#include <stdlib.h>

    // Exercício Proposto:
    // Colocar horas, minutos e segundos e o programa falar quantos segundos exitem naquele certo tempo;

int main (void) {
    int hora, minuto, segundo, resultado_segundo;

    // Colocar as Perguntas:
    printf("Coloque as horas: \n");
    scanf("%d", &hora);
    printf("Coloque os minutos: \n");
    scanf("%d", &minuto);
    printf("Coloque os segundos: \n");
    scanf("%d", &segundo);

    // Processamento de Dados:
    hora = hora * 3600;
    minuto = minuto * 60;
    resultado_segundo = (hora + minuto + segundo);

    // Primeiros prinf são esperimentais
    printf("horas tranformadas em segundos: %d \n", hora);
    printf("Minutos transformados em segundos: %d \n", minuto);
    printf("Segundos digitados: %d \n", segundo);

    // Resposta Final em Segundos:
    printf("Resultado feito em Segundos: %d \n", resultado_segundo);

}