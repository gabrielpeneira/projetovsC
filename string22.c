#include <stdio.h>

/*Escreva um programa que recebe uma string S e inteiros nao-negativos I e J e imprima ˜
o segmento S[I..J].*/

int main(void)
{
    char string[30];
    int i, j;

    printf("digite uma frase e dois numeros inteiros meores que 30:");
    scanf("%[^\n] %d %d", string, &i, &j);

    while (i != j)
    {
        printf("%c", string[i]);
        i++;
    }

    return 0;
}
