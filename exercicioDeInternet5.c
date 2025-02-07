#include <stdio.h>

int main(void)
{
    int v[4][4];
    int maior, linha, coluna;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("digite um valor:");
            scanf("%i", &v[i][j]);
        }
    }
    maior = v[0][0];
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            if (v[i][j] > maior)
            {
                maior = v[i][j];
                linha = i + 1;
                coluna = j + 1;
            }

            printf("%i ", v[i][j]);
        }
    }
    printf("maior valor:\nlinha:%i\ncoluna:%i", linha, coluna);

    return 0;
}
