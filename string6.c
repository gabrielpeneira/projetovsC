#include <stdio.h>

/*Crie um programa que compara duas strings*/

int main(void)
{
    char string1[] = "joao";
    char string2[] = "gabriel";
    int ehIgual = 1;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] != string2[i])
        {
            ehIgual = 0;
        }
    }
    if (ehIgual)
    {
        printf("as strings %s e %s sao iguais\n", string1, string2);
    }
    else
    {
        printf("as strings %s e %s nao sao iguais\n", string1, string2);
    }

    return 0;
}
