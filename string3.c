#include <stdio.h>f
/*Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiuscula ou min ´ uscula).*/
int main(void)
{
    char string[20];

    printf("digite uma palavra começando pela letra 'a':\n");
    scanf("%s", string);

    if (string[0] == 'a' || string[0] == 'A')
    {

        printf("a palavra digitada foi:%s\n", string);
    }
    else
    {

        printf("voce nao respeitou a instruçao");
    }
    return 0;
}