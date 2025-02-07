#include <stdio.h>
#define TAM 4
/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posic¸ao˜
das matrizes lidas.*/
void zera(int v[][TAM], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            v[i][j] = 0;
        }
    }
}
void preenche(int v[][TAM], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("digite um valor");
            scanf("%d", &v[i][j]);
        }
    }
}
void achaMaior(int v1[][TAM], int vf[][TAM], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (v1[i][j] > vf[i][j])
            {

                vf[i][j] = v1[i][j];
            }
        }
    }
}
void exibe(int v[][TAM], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        printf("\n");
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", v[i][j]);
        }
    }
}
int main(void)
{
    int v1[TAM][TAM], v2[TAM][TAM], vf[TAM][TAM];
    preenche(v1, TAM);
    preenche(v2, TAM);

    zera(vf, TAM);

    achaMaior(v1, vf, TAM);
    achaMaior(v2, vf, TAM);

    exibe(v1, TAM);
    printf("\n");
    exibe(v2, TAM);
    printf("\n");
    exibe(vf, TAM);

    return 0;
}
