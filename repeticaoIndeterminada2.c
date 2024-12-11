#include <stdio.h>

/*Seu Joaquim, um pequeno comerciante, deseja um lucro de 45% se o valor de custo do produto for menor que R$ 20,00;
caso contrário, o lucro será de 30%. Faça um programa que capture para cada um dos produtos o valor de custo e exibe o
valor de venda ( um por um).*/

int main(void)
{
    float custo, lucro, resultado;
    printf("\nqual o valor do produto?");
    scanf("%f", &custo);
    while (custo > 0)
    {

        if (custo < 20)
        {

            lucro = custo * 45 / 100;
        }
        else
        {

            lucro = custo * 30 / 100;
        }
        resultado = lucro + custo;

        printf("\no valor de venda desse produto eh:%.2f", resultado);

        printf("\nqual o valor do proximo produto ?(digite 0 para finalizar o programa)");
        scanf("%f", &custo);
    }

    return 0;
}
