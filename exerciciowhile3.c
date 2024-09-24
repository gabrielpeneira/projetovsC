#include <stdio.h>
//Faça um algoritmo em C que requisite a entrada de um número inteiro no intervalo de 1 a 10 (incluindo os dois valores). Caso um valor fora do intervalo seja inserido pelo usuário, o programa deve requisitar novamente um valor até que um válido seja inserido.

int main(void)
{
    int numero=-1;

    do{
        printf("escreva um numero entre 1 e 10");
        scanf("%d",&numero);

    }while(numero>=10 && numero<=0);

        printf("o numero %d eh valido!!!",numero);
    return 0;
}
