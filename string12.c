#include <stdio.h>

/* . Ler uma frase e contar quantos caracteres sao espaços em brancos. Lembre-se que ˜
uma frase e um conjunto de caracteres (vetor). */

int main(void)
{

    char frase[100];
    int contador = 0;
    printf("digite uma frase:");
    scanf("%[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            contador++;
        }
    }
    printf("ha %d espaços", contador);

    return 0;
}
