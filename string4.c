#include <stdio.h>
/* faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
 */
int main(void)
{
    char string[20];

    printf("escreva sem nome:\n");
    scanf("%s", string);

    for (int i = 0; i < 4; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}
