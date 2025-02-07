#include <stdio.h>
#define TAM 10
#include <math.h>
int main(void)
{
    int v[TAM][TAM];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (i < j)
            {
                v[i][j] = 2 * i + 7 * j - 2;
            }
            else if (i == j)
            {

                v[i][j] = 3 * (pow(i, 2)) - 1;
            }
            else
            {

                v[i][j] = 4 * (pow(i, 3)) - 5 * (pow(j, 2)) + 1;
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

    return 0;
}
