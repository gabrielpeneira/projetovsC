#include <stdio.h>
/*1. Faça um programa que pergunte a quantidade de tarefas concluídas em um dia e o
tempo gasto para realizá-las e mostre a produtividade (tarefas por hora) que deve ser
calculada por uma função
Fórmula para calcular a produtividade:
Produtividade=Quantidade de Tarefas/Tempo Gasto (horas)
​
Variações do problema:
V1: Pergunte a quantidade de tarefas concluídas e o tempo gasto (em horas) em
cada um dos 5 dias da semana (período) e mostre a produtividade de cada dia e a
quantidade total de tarefas realizadas no período (5 dias)
V2: Modifique o programa para que a quantidade de dias do período seja perguntada
ao usuário.
V3: Quantos dias tiveram produtividade superior a 5 tarefas por hora?
V4: Qual o percentual de dias com produtividade superior a 5 tarefas por hora?
V5: Qual o tempo total gasto nos dias com produtividade superior a 5 tarefas por
hora?
V6: Quantos dias tiveram produtividade inferior a 2 tarefas por hora?
V7: Qual a produtividade média do período? e a total
V8: Qual a média de tempo gasto nos dias em que a produtividade foi menor ou igual a
5 tarefas por hora?
V9: Qual foi a maior produtividade? E qual foi o tempo gasto nessa medida?
V10: Qual a maior quantidade de tarefas concluídas e em qual dia.
v11: Qual a menor quantidade de tarefas concluídas e em qual dia.

v12: Considere 4 períodos distintos. Quantas vezes a produtividade foi superior a 5
tarefas por hora considerando os 4 períodos?*/
float produtividade(int tarefas, int horas)
{

    return (float)tarefas / horas;
}
float percentDiasMais5(int contaDiasMais5, int periodo)
{

    return (float)contaDiasMais5 * 100 / periodo;
}
float calculaMedia(float total, int periodo)
{

    return total / periodo;
}
int main(void)
{
    int horas, tarefas, periodo, dias = 0, totalFarefas = 0, contaDiasMais5 = 0, contaDiasMenos5 = 0, tempoMais5 = 0, tempoMenos5 = 0, contaDiasMenos2 = 0, totalTempo = 0, tempoMaiorProdutividade = 0, maiorQtdTarefas = 0, diaMaiorQtdTarefas, menorQtdTarefas = 0, diaMenorQtdTarefas, contaPeriodos = 0, totalContaDiasMais5 = 0;
    float resultado, percentual, totalProdutividade = 0, maiorProdutividade = 0;
    while (contaPeriodos < 4)
    {
        contaPeriodos++;
        printf("digite o %dº periodo de dias\n", contaPeriodos);
        scanf("%d", &periodo);
        dias = 0;
        totalFarefas = 0;
        contaDiasMais5 = 0;
        contaDiasMenos5 = 0;
        tempoMais5 = 0;
        tempoMenos5 = 0;
        contaDiasMenos2 = 0;
        totalTempo = 0;
        tempoMaiorProdutividade = 0;
        maiorQtdTarefas = 0;
        menorQtdTarefas = 0;

        while (dias < periodo)
        {
            dias++;
            printf("no dia %d ,quantas tarefas vc fez e em quanto tempo?\n", dias);
            scanf("%d %d", &tarefas, &horas);
            totalFarefas += tarefas;
            resultado = produtividade(tarefas, horas);

            totalProdutividade += resultado;
            if (resultado > maiorProdutividade)
            {

                maiorProdutividade = resultado;
                tempoMaiorProdutividade = horas;
            }
            if (dias == 1 || tarefas < menorQtdTarefas)
            {

                menorQtdTarefas = tarefas;
                diaMenorQtdTarefas = dias;
            }

            if (tarefas > maiorQtdTarefas)
            {

                maiorQtdTarefas = tarefas;
                diaMaiorQtdTarefas = dias;
            }

            printf("a produtividade do dia %d eh %.1f\n", dias, resultado);
            if (resultado > 5)
            {

                tempoMais5 += horas;
                contaDiasMais5++;
                totalContaDiasMais5++;
            }
            else
            {
                tempoMenos5 += horas;
                contaDiasMenos5++;
            }
            if (resultado < 2)
            {

                contaDiasMenos2++;
            }
        }

        printf("o total de tarefas feitas eh: %d\n\no total de dias com produtividade maior que 5 tarefas por hora eh:%d\n", totalFarefas, contaDiasMais5);

        percentual = percentDiasMais5(contaDiasMais5, periodo);
        printf("o percentual de dias com produtividade maior que 5 tarefas por hora eh:%.2f%%\n", percentual);

        printf("tempo total gasto nos dias em que a produtividade foi maior que 5 tarefas por hora:%d horas\n", tempoMais5);

        printf("o total de dias com produtividade menor que 2 tarefas por hora eh:%d\n", contaDiasMenos2);

        printf("a media de produtividade eh:%.2f\no total de produtividade eh %.2f\n", calculaMedia(totalProdutividade, periodo), totalProdutividade);

        printf("a media de tempo gasto nos dias em que a produtividade foi menor ou igual a 5 eh:%.2f\n", calculaMedia(tempoMenos5, contaDiasMenos5));

        printf("a maior produtiviade foi %.2f, e o tempo gasto foi %d\n", maiorProdutividade, tempoMaiorProdutividade);

        printf("a maior quantidade de tarefas foi %d no dia %d\n", maiorQtdTarefas, diaMaiorQtdTarefas);

        printf("a menor quantidade de tarefas foi %d no dia %d\n", menorQtdTarefas, diaMenorQtdTarefas);
    }

    printf("o total de dias com produtividade maior que 5 nos 4 periosos eh:%d", totalContaDiasMais5);
    return 0;
}
