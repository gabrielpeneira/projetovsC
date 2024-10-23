#include <stdio.h>

int main(void)
{
    int participante, diasCongresso, contadorDias = 0, nota, somadorNotas = 0, contador0 = 0, contador10 = 0, recordParticipante = 0, diaRecord = 0;

    float notaMedia;

    printf("quantos dias teve o congresso?");
    scanf("%i", &diasCongresso);

    while (diasCongresso > contadorDias)
    {
        contador10 = 0;
        contador0 = 0;
        contadorDias++;
        participante = 0;
        nota = 1;
        while (nota >= 0)
        {
            nota = 0;

            if (participante > recordParticipante)
            {
                recordParticipante = participante;
                diaRecord = contadorDias;
            }
            printf("\ndia %i\navalie a organizacao do evento (0-10)\n", contadorDias, participante);
            scanf("%i", &nota);
            if (nota >= 0)
            { //???
                somadorNotas += nota;
            }
            if (nota < 7)
            {
                printf("sinto muito por te desapontar :(\n");
            }
            else
            {
                printf("fico feliz que gostou\n");
            }
            if (nota == 10)
            {
                contador10++;
            }
            if (nota == 0)
            {
                contador0++;
            }
            participante++;
        }
        participante--;
        notaMedia = somadorNotas / participante;
        printf("a nota media do dia %i eh:%.2f\n", contadorDias, notaMedia);
        printf("quantidade de:\nnotas 0:%i\nnotas 10:%i\n", contador0, contador10);
    }
    printf("dia com maior numero de participantes:%i com %i participantes", diaRecord, recordParticipante);
    return 0;
}
