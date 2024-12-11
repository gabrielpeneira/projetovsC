#include <stdio.h>

int main()
{
    int media, valorVendido, codMercadoria, qtVendida, codVendedor, i;
    int vVendedores[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int vMercadoria[5] = {10, 22, 36, 47, 58};
    int vValor[5] = {1, 2, 10, 1, 20};

    printf("digite o codigo do vendedor:");
    scanf("%d", &codVendedor);

    for (i = 0; i < 10; i++)
    {

        if (codVendedor == vVendedores[i])
        {
            printf("digite o codigo da mercadoria:");
            scanf("%d", &codMercadoria);
            printf("digite a quantidade vendida:");
            scanf("%d", &qtVendida);
        }
        }

    for (int j = 0; j < 5; j++)
    {

        if (codMercadoria == vMercadoria[j])
        {

            valorVendido = vValor[j] * qtVendida;
            media = valorVendido / qtVendida;
        }
    }

    printf("o valor unitario medio eh:%d", media);
    return 0;
}
