#include <stdio.h>

/*Faça um programa em C que informe a matrícula, média dos alunos de uma turma a
partir da leitura da matrícula e das notas das 3 provas. Os valores das notas devem ser posivos. Término da leitura: matrícula = 0.*/

int validaPositivo(void)
{
    float valor;
    printf("\n digite um valor positivo");
    scanf("%f", &valor);
    while (valor <= 0)
    {
        printf("\nvalor invalido");
        printf("\ndigite um valor positivo");
        scanf("%f", &valor);
    }

    return valor;
}
float media(float totalNota, int contaAluno)
{

    return totalNota / contaAluno;
}

int main(void)
{
    int matricula, contador;
    float nota, totalNota;

    printf("\ndigite a matricula");
    scanf("%d", &matricula);
    while (matricula > 0)
    {
        contador = 0;
        totalNota = 0;
        while (contador < 3)
        {
            contador++;
            printf("\ndigite a %d nota do aluno:", contador);
            nota = validaPositivo();
            totalNota += nota;
        }
        printf("\na media do aluno :%d eh:%.2f", matricula, media(totalNota, 3));
        printf("\nDiga a matricula do proximo aluno ( ou 0 para finalizar )");
        scanf("\n%d", &matricula);
    }

    return 0;
}
