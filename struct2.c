#include <stdio.h>

/*. Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.
*/

int main(void)
{
    struct dados
    {

        char nome[30];
        int idade;
        char endereco[50];
    } pessoa;

    printf("digite seu nome:\n");
    scanf("%[^\n]", pessoa.nome);

    printf("digite sua idade:\n");
    scanf("%i", &pessoa.idade);

    printf("digite seu endereco:\n");
    scanf(" %[^\n]", pessoa.endereco);

    printf("os seus dados sao:\n");
    printf("nome:%s\nidade:%i\nendereco:%s", pessoa.nome, pessoa.idade, pessoa.endereco);

    return 0;
}
