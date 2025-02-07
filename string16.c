#include <stdio.h>

/*Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco. Retirar os
espac¸os em branco do vetor e depois escrever o vetor resultante.*/

int main(void)
{
    char frase[50];

    printf("digite uma frase:");
    scanf("%[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            for (int j = i; frase[j] != '\0'; j++)
            {
                frase[j] = frase[j + 1];
            }
        }
    }
    printf("frase sem espaços:\n%s", frase);

    return 0;
}
