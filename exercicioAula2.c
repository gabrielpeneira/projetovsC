#include <stdio.h>

/*2. Um professor de educação física deseja calcular a quantidade de calorias queimadas
pelos seus alunos durante as atividades físicas diárias. O número de calorias é calculado com
base no tempo de exercício e o tipo de atividade física realizada, seguindo a fórmula:

Calorias Queimadas=Tempo de Exercıcio (min)×Fator de Queima de Calorias (kcal/min)

Os fatores de queima de calorias são:
1. Caminhada leve: 4 kcal/min
2. Corrida: 10 kcal/min
3. Natação: 8 kcal/min
4. Ciclismo: 6 kcal/min
Faça um programa que:
Obtenha a quantidade de alunos da turma (n). Para cada aluno, obtenha o tempo de
exercício (em minutos) e o tipo de atividade física (1 a 4). Calcule e mostre o número de
calorias queimadas por cada aluno.
 Crie uma função para cálculo do fator de queima de caloreas. Recebe o nº da
atividade e retorna a qtdade de kcal/min da atividade
 Crie uma função para calcular calorias queimadas.:recebe o tempo e o número da
atividade e retorna a quantidade de calorias queimadas
Seu programa deve responder:

V1: Quantos alunos queimaram menos de 200 kcal?
V2: Qual o percentual de alunos que queimaram menos de 200 kcal?
V3: Qual o total de calorias queimadas pela turma?
V4: Qual a média de calorias queimadas por aluno?
V5: Qual o tempo médio de exercício dos alunos que queimaram mais de 400 kcal?
V6: Considere 3 turmas de alunos deste professor e repita o processamento para cada
uma.
V7: Qual o total de calorias queimadas pelas três turmas?
V8: DESAFIO: Qual a maior quantidade de calorias queimadas por um aluno em cada
turma?*/
int calculaTipoaAtividade(int tipoAtividade)
{

    int calorias;
    if (tipoAtividade == 1)
    {
        calorias = 4;
    }
    if (tipoAtividade == 2)
    {
        calorias = 10;
    }
    if (tipoAtividade == 3)
    {
        calorias = 8;
    }
    else
    {
        calorias = 6;
    }
    return calorias;
}
int calculaCalorias(int tempoAtividade, int tipoAtividade)
{

    return tempoAtividade * calculaTipoaAtividade(tipoAtividade);
}
float calculaPercentual(int contaAlunosMenos200, int quantidadeAlunos)
{

    return (float)contaAlunosMenos200 * 100 / quantidadeAlunos;
}
float calculaMedia(int contaCalorias, int quantidadeAlunos)
{

    return (float)contaCalorias / quantidadeAlunos;
}
int main(void)
{
    int quantidadeAlunos, contaAlunos = 0, tempoAtividade, tipoAtividade, caloriasQueimadas, contaAlunosMenos200 = 0, contaCalorias = 0;

    printf("quantos alunos?");
    scanf("%d", &quantidadeAlunos);

    while (contaAlunos < quantidadeAlunos)
    {
        contaAlunos++;
        printf("aluno %d, quantos minutos de atividade?", contaAlunos);
        scanf("%d", &tempoAtividade);
        printf("qual tipo de atividade?\n1-caminhada\n2-corrida\n3-natacao\n4-ciclismo\n");
        scanf("%d", &tipoAtividade);

        caloriasQueimadas = calculaCalorias(tempoAtividade, tipoAtividade);
        contaCalorias += caloriasQueimadas;
        if (caloriasQueimadas < 200)
        {
            contaAlunosMenos200++;
        }
    }
    printf("a quantidade de alunos que queimaram menos que 200 calorias sao:%d\n", contaAlunosMenos200);
    printf("o percentual de alunos que queimaram menos que 200 calorias eh:%.2f%%\n", calculaPercentual(contaAlunosMenos200, quantidadeAlunos));
    printf("o total de calorias queimadas pela turma eh:%d\n", contaCalorias);
    printf("a media de calorias queimadas por aluno eh:%.2f\n", calculaMedia(contaCalorias, quantidadeAlunos));

    return 0;
}
