#include <stdio.h>
#define TAM 8

void calculaNota(int *vPontos, int *vRespostas, int totalAnulado, int totalPontos)
{

    for (int i = 0; i < 20; i++)
    {

        if (vRespostas[i] < 1 || vRespostas[i] > 8)
        {

            totalAnulado++;
        }
        for (int j = 0; j < TAM; j++)
        {

            if (vRespostas[i] == j + 1)
            {

                totalPontos += vPontos[j];
            }
        }
    }

    printf("\ntotal de pontos:%d", totalPontos);

    printf("\ntotal de questoes anuladas:%d", totalAnulado);

    return;
}
int main(void)
{
    int vPontuacao[TAM] = {1, 3, 3, 3, 4, 8, 8, 10};
    int vRespostas[20];
    int voto, totalPontos = 0, totalAnulado = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("usando uma nota de 1-8 qual seu nivel de satisdaçao?\nquestao %d:", i + 1);
        scanf("%d", &voto);

        vRespostas[i] = voto;
    }

    calculaNota(vPontuacao, vRespostas, totalAnulado, totalPontos);

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
