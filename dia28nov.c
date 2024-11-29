#include <stdio.h>
#define TAM 8

int main(void)
{
    int vPontuacao[TAM] = {1, 3, 3, 3, 4, 8, 8, 10};
    int voto, totalPontos = 0, totalAnulado = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("usando uma nota de 1-8 qual seu nivel de satisdaçao?\nquestao %d:", i + 1);
        scanf("%d", &voto);

        if (voto < 1 || voto > 8)
        {

            totalAnulado++;
        }
        for (int j = 0; j < TAM; j++)
        {

            if (voto == j + 1)
            {

                totalPontos += vPontuacao[j];
            }
        }
    }
    printf("total de pontos:%d", totalPontos);

    if (totalAnulado <= 6)
    {
        if (totalPontos < 75)
        {
            printf("insatisfeito");
        }
        else if (totalPontos <= 89)
        {
            printf("satisfeito");
        }
        else
        {
            printf("muito satisfeito");
        }
    }
    else if (totalAnulado <= 12)
    {
        if (totalPontos < 75)
        {
            printf("insatisfeito");
        }
        else if (totalPontos <= 89)
        {
            printf("insatisfeito");
        }
        else
        {
            printf("satisfeito");
        }
    }
    else
    {
        printf("inconclusivo");
    }
    return 0;
}
