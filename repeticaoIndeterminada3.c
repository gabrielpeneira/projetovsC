#include <stdio.h>

/*Faça um programa que leia um número de alunos de uma turma (n) e a seguir, para cada aluno suas 2
notas, mostrando sua média.

Considere a existência da função calcMedia( float n1, float n2);*/

float calcMedia(float n1, float n2)
{

    return (n1 + n2) / 2;
}
int main(void)
{
    float n1, n2;
    int qtdAlunos, contador = 0;

    printf("\nquantos alunos tem na turma?");
    scanf("%d", &qtdAlunos);

    while (qtdAlunos > contador)
    {
        contador++;
        printf("\nqual a nota1 e nota2?");
        scanf("%f %f", &n1, &n2);

        printf("\na media do %d° aluno eh:%.2f", contador, calcMedia(n1, n2));
    }
    return 0;
}
