#include <stdio.h>

/*Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por ˆ
outro caractere ‘1’.*/

int main(void)
{
    char string[] = "25120010101";

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '0')
        {
            string[i] = '1';
        }
    }

    printf("%s", string);
    return 0;
}
