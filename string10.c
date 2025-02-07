#include <stdio.h>

/*Faça um programa que receba do usuario uma string. O programa imprime a string sem ´
suas vogais.
*/

int main(void)
{
    char palavra[20];
    char vogais[] = "aeiou";
    int ehVogal;
    printf("digite uma palavra:");
    scanf("%s", palavra);

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
    }

    return 0;
}
