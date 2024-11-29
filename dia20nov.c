#include <stdio.h>

#define TAM 10

void zeraVetor(int *v, int qt)
{
    for (int i = 0; i < qt; i++)
    {
        v[i] = 0;
    }
}

void preencheVetor(int *v, int qt)
{
    for (int ind = 0; ind < qt; ind++)
    {
        printf("Candidato a rei da escola número %d, digite um número de sua escolha: ", ind + 1);
        scanf("%d", &v[ind]);
    }
}

void votacao(int qtdAlunos, int *candidato, int *contaVotos, int qtd)
{
    int voto;
    for (int i = 0; i < qtdAlunos; i++)
    {
        printf("\nQual o voto do aluno %d? ", i + 1);
        scanf("%d", &voto);

        int votoValido = 0;
        for (int j = 0; j < qtd; j++)
        {
            if (voto == candidato[j])
            {
                contaVotos[j]++;
                votoValido = 1;
                break;
            }
        }
        if (!votoValido)
        {
            printf("Voto inválido! O número não corresponde a nenhum candidato.\n");
        }
    }
}

int encontraMaior(int *contaVotos, int qtd)
{
    int maiorNum = 0, indice = 0;
    for (int k = 0; k < qtd; k++)
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

    printf("\nQuantos alunos tem na escola? ");
    scanf("%d", &qtdAlunos);

    zeraVetor(contaVotos, TAM);

    printf("\nPara rainha do baile:\n");
    votacao(qtdAlunos, cand, contaVotos, TAM);

    indice = encontraMaior(contaVotos, TAM);

    printf("\nA rainha do baile é a candidata número: %d\n", cand[indice]);

    zeraVetor(contaVotos, TAM);

    printf("\nPreenchendo candidatos a rei:\n");
    preencheVetor(candRei, TAM);

    printf("\nPara rei do baile:\n");
    votacao(qtdAlunos, candRei, contaVotos, TAM);

    indice = encontraMaior(contaVotos, TAM);

    printf("\nO rei do baile é o candidato número: %d\n", candRei[indice]);

    return 0;
}