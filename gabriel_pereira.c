// gabriel pereira da silva barbosa

#include <stdio.h>
void valida(int *ponteiro)
{

    int num;

    printf("digite o numero da sua amatricula:");
    scanf("%d", &num);

    while (num != 0 || num > 1001 && num < 9999)
    {
        printf("matricula invalida, digite um numero valido:");
        scanf("%d", &num);
    }
    *ponteiro = num;
}
void separaNum(int num, int *pEstacao, int *pSequencial)
{

    *pEstacao = num % 100;
    *pSequencial = num / 100;
}
void determina_dia(int estacao, int sequencial, int *pDia)
{

    if (estacao <= 3)
    {
        if (sequencial <= 500)
        {

            *pDia = 5;
        }
        else
        {

            *pDia = 4;
        }
    }
    else if (estacao <= 6)
    {

        if (sequencial <= 200)
        {

            *pDia = 2;
        }
        else
        {

            *pDia = 6;
        }
    }
    else
    {

        if (sequencial <= 800)
        {

            *pDia = 3;
        }
        else
        {

            *pDia = 7;
        }
    }
}

int main(void)
{
    int *matr, *dia, n_est, n_seq;
    valida(&matr);
    while (matr != 0)
    {
        separaNum(*matr, &n_est, &n_seq);
        determina_dia(n_est, n_seq, &dia);
        printf("\n O dia do pagamento do decimo terceiro do funcionário % d e %d", &matr, &dia);
    }
}