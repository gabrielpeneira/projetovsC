#include <stdio.h>

/*Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *.
*/

int main(void)
{
    char palavra[2][30];
    char inversao[2][30];
    int i = 0, j, k;
    while (i < 2)
    {
        printf("digite uma frase:\n");
        scanf(" %[^\n]", palavra[i]);
        j = 0;

        while (palavra[i][j] != '\0')
        {
            if (palavra[i][j] == 'a')
            {
                palavra[i][j] = '*';
            }

            j++;
        }
        k = 0;
        j--;
        while (j >= 0)
        {
            inversao[i][k] = palavra[i][j];
            j--;
            k++;
        }
        inversao[i][k] = '\0';
        i++;
    }
    printf("primeira frase:%s \n", inversao[0]);
    printf("segunda frase:%s \n", inversao[1]);
    return 0;
}
