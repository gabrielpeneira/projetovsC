#include <stdio.h>

#define TAM 10
void zeraVetor(int *v, int qt)
{
    int i;
    for (i = 0; i < qt; i++)
    {
        v[i] = 0;
    }
    return;
}
void preencheVetor(int *v, int qt)
{
    int ind;
    for (ind = 0; ind < qt; ind++)
    {
        printf("\ncandidato a rei da escola numero:%d, digite um numero de sua escolha:\n", ind + 1);
        scanf("%d", &v[ind]);
    }
    return;
}
void votacao(int qtdAlunos, int *candidato, int *contaVotos, int qtd)
{
    int voto;
    for (int i = 0; i < qtdAlunos; i++)
    {
        printf("\nqual o voto do aluno %i?\n", i + 1);
        scanf("%i", &voto);
        for (int j = 0; j < TAM; j++)
        {
            if (voto == candidato[j])
            {
                contaVotos[j]++;
            }
        }
    }
}
int encontraMaior(int *candidato, int *contaVotos, int qtd)
{
    int maiorNum = 0, indice = 0;
    for (int k = 0; k < TAM; k++)
    {
        if (contaVotos[k] > maiorNum)
        {
            maiorNum = contaVotos[k];
            indice = k;
        }
    }
    return indice;
}
int main(void)
{
    int candRei[TAM];
    int cand[TAM] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int contaVotos[TAM];
    int qtdAlunos, indice;

    preencheVetor(candRei, TAM);

    printf("\nquntos alunos tem na escola?\n");
    scanf("%i", &qtdAlunos);

    zeraVetor(contaVotos, TAM);

    printf("\npara rainha do baile:\n");
    votacao(qtdAlunos, cand, contaVotos, TAM);

    indice = encontraMaior(cand, contaVotos, TAM);

    printf("\na rainha do baile eh a candidata numero: %i\n", cand[indice]);

    zeraVetor(contaVotos, TAM);

    printf("\npara rei do baile:\n");
    votacao(qtdAlunos, candRei, contaVotos, TAM);

    indice = encontraMaior(candRei, contaVotos, TAM);

    printf("\no rei do baile eh o candidato numero: %i\n", candRei[indice]);
    return 0;
}
