#include <stdio.h>

/*Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo: ´
“0011001” -> 3
*/

int main(void)
{
    char string[] = "0101101001";
    int contador = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '1')
        {
            contador++;
        }
    }
    printf("o total de 1's na string eh:%d", contador);

    return 0;
}
