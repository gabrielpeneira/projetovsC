#include <stdio.h>
int contaCaracteres(char string[])
{

    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(void)
{
    char string[20];
    int numero;
    printf("digite uma palavra:\n");
    scanf("%s", string);

    numero = contaCaracteres(string);
    printf("a string:%s contem %d caracteres\n", string, numero);
    return 0;
}