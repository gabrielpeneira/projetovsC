#include <stdio.h>

/* Construa uma estrutura aluno com nome, numero de matr ´ ´ıcula e curso. Leia do usuario ´
a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
tela. */

int main(void)
{
    int i = 0;
    struct aluno
    {
        char nome[30];
        int matricula;
        char curso[30];
    } estudante[5];

    while (i < 5)
    {
        printf("digite o nome do aluno %i\n", i + 1);
        scanf(" %[^\n]", estudante[i].nome);
        printf("digite a matricula do aluno %i\n", i + 1);
        scanf("%i", &estudante[i].matricula);
        printf("digite o curso do aluno %i\n", i + 1);
        scanf(" %[^\n]", estudante[i].curso);
        ++i;
    }
    printf("\n");
    i = 0;
    while (i < 5)
    {
        printf("aluno %i:\nnome:%s\n", i + 1, estudante[i].nome);
        printf("matricula:%i\n", estudante[i].matricula);
        printf("curso:%s\n", estudante[i].curso);
        i++;
    }

    return 0;
}
