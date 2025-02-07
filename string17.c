#include <stdio.h>

/*Faça um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em ˆ
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario. */

int main(void)
{

    char palavra[20];
    char L1, L2;
    int i = 0;
    printf("digite uma palavra\n");
    scanf("%s", palavra);

    printf("digite duas letras\nL1:\n");
    scanf(" %c", &L1);
    printf("L2\n:");
    scanf(" %c", &L2);

    while (palavra[i] != '\0')
    {

        if (palavra[i] == L1)
        {

            palavra[i] = L2;
        }
        i++;
    }
    printf("a nova palavra é:\n%s", palavra);

    return 0;
}