#include <stdio.h>

/* 1. Escreva um trecho de codigo para fazer a criac¸ ´ ao dos novos tipos de dados conforme ˜
solicitado abaixo:
• Horario: composto de hora, minutos e segundos. ´
• Data: composto de dia, mes e ano. ˆ
• Compromisso: composto de uma data, horario e texto que descreve o compromisso. */

int main(void)
{
    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    } agora = {10, 50, 20};

    struct data
    {
        int dia;
        int mes;
        int ano;
    } hoje = {25, 12, 2001};

    struct compromisso
    {
        struct horario hr;
        struct data hj;
        char texto[50];
    } grandeDia = {
        .hr = agora,
        .hj = hoje,
        "aula de estrutura 1"};

    printf("compromisso:%s\n", grandeDia.texto);
    printf("horario:%i:%i:%i\n", grandeDia.hr.hora, grandeDia.hr.minuto, grandeDia.hr.segundo);
    printf("data:%i/%i/%i\n", grandeDia.hj.dia, grandeDia.hj.mes, grandeDia.hj.ano);

    return 0;
}
