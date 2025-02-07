#include <stdio.h>
#define TAM 5
/*Leia uma matriz 5 x 5. Leia tambem um valor ´ X. O programa devera fazer uma busca ´
desse valor na matriz e, ao final, escrever a localizac¸ao (linha e coluna) ou uma mensa- ˜
gem de “nao encontrado”. */

int main(void)
{
    int v[TAM][TAM];
    int x, linha = -1, coluna = -1;

    printf("digite o valor de x:\n");
    scanf("%d", &x);

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("digite um valor:");
            scanf("%i", &v[i][j]);
        }
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (v[i][j] == x)
            {
                linha = i;
                coluna = j;
            }
        }
    }
    if (linha != -1)
    {
        printf("o valor de x esta em:\nlinha:%d\ncoluna:%d", linha, coluna);
    }
    else
    {
        printf("nao encontrado");
    }

    return 0;
}
