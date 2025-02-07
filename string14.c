#include <stdio.h>

/* Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em ´
letras minusculas. ´ Dica: some 32 dos caracteres cujo codigo ASCII est ´ a entre 65 e 90. */

int main(void)
{
    char palavra[20];
    int i = 0, ehMaiuscula = 1;

    printf("escreva uma palavra usando apenas letras maiusculas:");
    scanf("%s", palavra);

    while (palavra[i] != '\0')
    {
        if (palavra[i] <= 90 && palavra[i] >= 65)
        {
            palavra[i] += 32;
        }
        else
        {
            ehMaiuscula = 0;
        }
        i++;
    }

    if (ehMaiuscula)
    {
        printf("conversao:\n%s", palavra);
    }
    else
    {
        printf("a palavra digitada invalida!!!");
    }

    return 0;
}
