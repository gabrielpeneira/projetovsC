#include <stdio.h>
#define TAM 3
/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao abaixo da ˜
diagonal principal.
*/
int main(void)
{
    int v[TAM][TAM], total = 0;

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("digite um valor:");
            scanf("%d", &v[i][j]);
        }
    }
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (i > j)
            {
                total += v[i][j];
            }
        }
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("\n");
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", v[i][j]);
        }
    }

    printf("\na soma dos elementos abaixo da diagonal eh:%d", total);
    return 0;
}
