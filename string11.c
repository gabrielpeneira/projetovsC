#include <stdio.h>

/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui
essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais
da palavra dada por esse caractere*/

int main(void)
{
    char vogais[] = "aeiou";
    char palavra[] = "gabriel";
    int ehVogal;

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        ehVogal = 1;
        for (int j = 0; vogais[j] != '\0'; j++)
        {

            if (palavra[i] == vogais[j])
            {
                ehVogal = 0;
            }
        }
        if (ehVogal)
        {
            printf("%c", palavra[i]);
        }
        else
        {
            printf("A");
        }
    }

    return 0;
}
