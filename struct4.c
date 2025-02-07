#include <stdio.h>
#define TAM 2
/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac¸ao. */

void zeraVetor(float v[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        v[i] = 0;
    }
}
float ehMaior(float n1, float maior, int *indice, int i)
{

    if (n1 > maior)
    {
        (*indice) = i;
        return n1;
    }
    else
    {
        return maior;
    }
}
float ehMenor(float n1[], float menor)
{

    menor = n1[0];

    for (int i = 0; i < 3; i++)
    {
        if (menor > n1[i])
        {
            menor = n1[i];
        }
    }
    return menor;
}
int main(void)
{
    float maiorNota1 = 0, maiorMedia = 0, menorMedia;
    int idNota1, idMaiorMed, idMenorMed;
    float vTotal[TAM], vMedia[TAM];

    zeraVetor(vTotal, TAM);

    struct estudantes
    {
        int matr;
        char nome[30];
        float nota1;
        float nota2;
        float nota3;
    } aluno[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("digite a matricula do aluno %i\n", i + 1);
        scanf("%i", &aluno[i].matr);
        printf("digite o nome do aluno %i\n", i + 1);
        scanf(" %[^\n]", aluno[i].nome);
        printf("digite as 3 notas do aluno %i\n", i + 1);
        scanf("%f %f %f", &aluno[i].nota1, &aluno[i].nota2, &aluno[i].nota3);

        maiorNota1 = ehMaior(aluno[i].nota1, maiorNota1, &idNota1, i);

        vTotal[i] += aluno[i].nota1;
        vTotal[i] += aluno[i].nota2;
        vTotal[i] += aluno[i].nota3;
        vMedia[i] = vTotal[i] / 3;

        maiorMedia = ehMaior(vMedia[i], maiorMedia, &idMaiorMed, i);
    }
    // menorMedia = ehMenor(vMedia, menorMedia);

    printf("o aluno com maior nota na prova 1 eh:%s\n", aluno[idNota1].nome);
    printf("o aluno com maior media eh:%s\n", aluno[idMaiorMed].nome);
    return 0;
}
