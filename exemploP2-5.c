#include <stdio.h>

void zera(int v[], int qt)
{
    for (int i = 0; i < qt; i++)
    {

        v[i] = 0;
    }
}

void exibeFilhos(int v[], int qt)
{

    int qtFilhos, maior = 0;
    zera(v, qt);
    for (int i = 0; i < qt; i++)
    {

        printf("qunatos filhos vc tem?:");
        scanf("%d", &qtFilhos);

        v[qtFilhos]++;
    }
    for (int j = 0; j < qt; j++)
    {
        printf("funcionarios com %i filho(s):\n%i\n", j, v[j]);
        if (v[j] > maior)
        {
            maior = v[j];
        }
        }
    printf("a qunatidade mais comum eh:%d", maior);
}
int main(void)
{
    int vFilhos[9];

    exibeFilhos(vFilhos, 10);

    return 0;
}
