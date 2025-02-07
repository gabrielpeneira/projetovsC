#include <stdio.h>
/*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrario imprimir “N ´ AO ACEITA”.*/

int main(void)
{
    char nome[20], sexo[9], sexFem[] = "feminino";
    int idade, ehIgual = 1;

    printf("nome:\n");
    scanf("%s", nome);

    printf("idade:\n");
    scanf("%d", &idade);

    printf("sexo:\n");
    scanf("%s", sexo);

    for (int i = 0; sexo[i] != '\0'; i++)
    {
        if (sexo[i] != sexFem[i])
        {
            ehIgual = 0;
        }
    }

    if (ehIgual && idade < 25)
    {
        printf("ACEITA");
    }
    else
    {

        printf("NAO ACEITA");
    }

    return 0;
}
