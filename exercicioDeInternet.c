#include <stdio.h>

#define TAM 5

int main(void)
{
    int soma = 0, i;
    float media;
    int v[TAM];
    for (i = 0; i < TAM; i++)
    {
        printf("digite um valor:\n");
        scanf("%d", &v[i]);

        soma += v[i];
    }
    printf("a soma dos valores eh:%d\n", soma);

    media = soma / TAM;
    printf("a media dos valores eh:%f\n", media);
    for (i = 0; i < TAM; i++)
    {

        if (v[i] < media)
        {

            printf("%d eh menor que a media\n", v[i]);
        }
        else
        {
            printf("%d eh maior que a media\n", v[i]);
        }
    }
    return 0;
}
