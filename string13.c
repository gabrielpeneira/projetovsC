#include <stdio.h>

/* Faça um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII ´
de cada caractere da palavra. Imprima a string resultante. */

int main(void)
{
    char palavra[50];
    int i = 0;
    printf("escreva uma palavra:");
    scanf("%s", palavra);

    while (palavra[i] != '\0')
    {
        palavra[i] += 1;

        i++;
    }

    printf("%s", palavra);
    return 0;
}
