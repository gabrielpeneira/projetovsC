#include <stdio.h>

int main(void)
{

    int vetor[4][4];

    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            vetor[i][j] = i * j;
        }
    }
    for (i = 0; i < 4; i++)
    {

        printf("\n");
        for (j = 0; j < 4; j++)
        {

            printf("%i ", vetor[i][j]);
        }
    }

    return 0;
}
