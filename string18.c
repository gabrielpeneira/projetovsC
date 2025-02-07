#include <stdio.h>

/*Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa
deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve
escrever o nome e a idade das pessoas mais jovens e mais velhas.*/

int main(void)
{
    char nomes[10][20];
    int idade[10], maiorId, menorId;
    int i = 0, tamanho, indiceN, indicM;

    do
    {
        printf("digite o nome:\n");
        scanf(" %s", &nomes[i]);
        printf("digite a idade:\n");
        scanf("%d", &idade[i]);
        i++;
    } while (idade[i - 1] >= 0 || i == 10);
    tamanho = i;
    i = 0;
    maiorId = idade[i];
    menorId = idade[i];

    while (i < tamanho - 1)
    {
        if (idade[i] > maiorId)
        {
            maiorId = idade[i];
            indicM = i;
        }
        if (idade[i] < menorId)
        {
            menorId = idade[i];
            indiceN = i;
        }
        i++;
    }

    printf("mais velho:%s\n", nomes[indicM]);
    printf("idade:%d\n", idade[indicM]);
    printf("mais jovem:%s\n", nomes[indiceN]);
    printf("idade:%d\n", idade[indiceN]);

    return 0;
}
