#include <stdio.h>
#define TAM 5
int calculos(float valor, int tempo, float *rendimento, float *aliquotaIR)
{

    int aliquota, bonus;
    if (valor <= 1000)
    {
        aliquota = valor * 0.5;
    }
    else if (valor <= 3000)
    {
        aliquota = valor * 0.8;
    }
    else
    {
        aliquota = valor * 1.5;
    }
    bonus = tempo * 10;
    if (bonus > 200)
    {
        bonus = 200;
    }
    *rendimento = aliquota * (valor + bonus);

    if (valor <= 10000)
    {
        if (tempo <= 12)
        {
            *aliquotaIR = valor * 2.7;
        }
        else if (tempo <= 24)
        {
            *aliquotaIR = valor * 2.0;
        }
        else
        {
            *aliquotaIR = valor * 1.5;
        }
    }
    else
    {
        if (tempo <= 30)
        {
            *aliquotaIR = valor * 2.7;
        }
        else
        {
            *aliquotaIR = valor * 1.5;
        }
    }
    return 0;
}
void ajustaAplicacoes(float vValores[], int vtempos[], int qt)
{
    float rendimento, aliquotaIR;
    for (int i = 0; i < qt; i++)
    {

        calculos(vValores[i], vtempos[i], &rendimento, &aliquotaIR);
        vValores[i] = (vValores[i] + rendimento) - aliquotaIR;
    }
}
int main(void)
{

    float vValores[TAM];
    int vTempos[TAM];

    for (int i = 0; i < TAM; i++)
    {

        printf("digite o valor aplicado:\n");
        scanf("%f", &vValores[i]);
        printf("digite o tempo em meses\n");
        scanf("%d", &vTempos[i]);
    }
    ajustaAplicacoes(vValores, vTempos, TAM);

    for (int j = 0; j < TAM; j++)
    {

        printf("valor %d\n%f\ntempo %d\n%d", j, vValores[j], j, vTempos[j]);
    }

    return 0;
}
