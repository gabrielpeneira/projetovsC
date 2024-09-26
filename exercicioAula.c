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

    float percentDiasMais5(int contaDiasMais5, int periodo)
    {

        return contaDiasMais5 * 100.0 / periodo;
    }
}
int main(void)
{
    int horas, tarefas, periodo, dias = 0, totalFarefas = 0, contaDiasMais5 = 0;
    float resultado;

    printf("digite o periodo de dias\n");
    scanf("%d", &periodo);

    while (dias < periodo)
    {
        dias++;
        printf("no dia %d ,quantas tarefas vc fez e em quanto tempo?\n", dias);
        scanf("%d %d", &tarefas, &horas);
        totalFarefas += tarefas;
        resultado = produtividade(tarefas, horas);

        printf("a produtividade do dia %d eh %.1f\n", dias, resultado);
        if (resultado > 5)
        {

            contaDiasMais5++;
        }
    }
    printf("o total de tarefas feitas eh: %d\n\no total de dias com produtividade maior que 5 eh:%d", totalFarefas, contaDiasMais5);
    return 0;
}
