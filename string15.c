#include <stdio.h>

/*Leia uma cadeia de caracteres e converta todos os caracteres para maiuscula. ´ Dica:
subtraia 32 dos caracteres cujo codigo ASCII est ´ a entre 97 e 122*/

int confere(char v[])
{

    int i = 0, ehMinuscula = 1;

    while (v[i] != '\0')
    {
        if (v[i] <= 122 && v[i] >= 97)
        {
            v[i] -= 32;
        }
        else
        {

            ehMinuscula = 0;
        }
        i++;
    }
    return ehMinuscula;
}
int main(void)
{
    char palavra[20];
    int ehMinuscula;
    printf("escreva uma palavra usando apenas letras minusculas !!!\n");
    scanf("%s", palavra);

    ehMinuscula = confere(palavra);

    if (ehMinuscula)
    {
        printf("converçao\n%s", palavra);
    }
    else
    {
        do
        {
            printf("palavra invalida!!!\ntente novamente\n");
            printf("escreva uma palavra usando apenas letras minusculas !!!\n");
            scanf("%s", palavra);

            ehMinuscula = confere(palavra);
        } while (ehMinuscula == 0);
        printf("converçao\n%s", palavra);
    }

    return 0;
}
