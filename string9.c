#include <stdio.h>

/*. Faça um programa que receba uma palavra e a imprima de tras-para-frente.*/
int contaString(char string[])
{

    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }

    return i;
}
int main(void)
{
    char palavra[20];
    char inversao[20];
    int tamanho, j = 0;
    printf("escreva uma palavra:\n");
    scanf("%s", palavra);
    tamanho = contaString(palavra);

    for (int i = tamanho - 1; i >= 0; i--)
    {

        inversao[j] = palavra[i];
        j++;
    }
    inversao[j] = '\0';
    printf("%s", inversao);

    return 0;
}
