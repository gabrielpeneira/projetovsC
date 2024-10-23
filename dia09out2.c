#include <stdio.h>
float valorCon(float salario, float valorSolicitado)
{

    int tempoTrabalho, idade;
    float valorConcedido, valorBase;
    if (valorSolicitado <= (salario * 0.15))
    {

        valorConcedido = valorSolicitado;
    }
    else
    {
        valorBase = (salario * 0.10);
        tempoTrabalho = 10;
        idade = 35;
        if (tempoTrabalho <= 10)
        {
            if (idade <= 30)
            {

                valorBase += 500.00;
            }
            else
            {

                valorBase += 1000.00;
            }
        }
        else
        {
            if (idade <= 20)
            {

                valorBase += 1500.00;
            }
        }
        if (tempoTrabalho > 20)
        {

            valorBase += 2000.00;
        }

        valorConcedido = valorBase;
    }
    return valorConcedido;
}
void valorEmprestimo(int matricula, float salario, float valorSolicitado)
{

    printf("\nmatricula:%i\n", matricula);
    printf("\nvalor concedido: %.2f\n", valorCon(salario, valorSolicitado));
    return;
}

int main(void)
{
    valorEmprestimo(123, 1000,100);

    valorEmprestimo(122, 1000,100);
    
    valorEmprestimo(222, 1000,100);
    return 0;
}
