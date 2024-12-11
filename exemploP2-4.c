#include <stdio.h>
void exibeDifMenorRetornaSoma(float menor, int qt, int vInsc[], float vSal[])
{
    float total = 0, diferenca;
    for (int i = 0; i < qt; i++)
    {
        diferenca = vSal[i] - menor;
        printf("matricula:%d\ndiferença em relacao ao menor salario:%f\n", vInsc[i], diferenca);
        total += diferenca;
    }
    printf("as soma das diferencas eh:%.2f", total);
}
int encontraMenor(float v[], int qt)
{
    float menor;
    menor = v[0];
    for (int i = 0; i < qt; i++)
    {
        if (menor > v[i])
        {

            menor = v[i];
        }
    }

    return menor;
}

int main(void)
{
    int vInsc[6] = {1010, 1020, 1030, 1040, 1050, 1060};
    float vSal[6] = {1000.00, 4020.00, 900.00, 10400.00, 20000.00, 1000.00};

    float menor;

    menor = encontraMenor(vSal, 5);

    printf("o menor salario eh:%f\n", menor);

    exibeDifMenorRetornaSoma(menor, 5, vInsc, vSal);
    return 0;
}
