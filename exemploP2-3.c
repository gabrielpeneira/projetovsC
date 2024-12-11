#include <stdio.h>

void diaAnterior(int *dia, int *mes, int *ano)
{

    if (*dia == 1)
    {
        if (*mes == 1)
        {

            (*ano)--;
            *mes = 12;
            *dia = 31;
        }
        else if (*mes == 3)
        {

            (*mes)--;
            *dia = 28;
        }
        else if (*mes == 4 || *mes == 6 || *mes == 8 || *mes == 9 || *mes == 11)
        {
            (*mes)--;
            (*dia) = 31;
        }
        else
        {
            (*mes)--;
            (*dia) = 30;
        }
    }
    else
    {

        (*dia)--;
    }

    printf("o dia anterior a data digitada eh:\n%d/ %d /%d", *dia, *mes, *ano);
}
int main(void)
{
    int dia, mes, ano, prioridade;

    printf("qual o nivel de prioridade:\n1-normal\n2-alta\n");
    scanf("%d", &prioridade);

    while (prioridade == 1 || prioridade == 2)
    {

        if (prioridade == 2)
        {
            printf("digite o dia:");
            scanf("%d", &dia);
            printf("digite o mes:");
            scanf("%d", &mes);
            printf("digite o ano:");
            scanf("%d", &ano);

            diaAnterior(&dia, &mes, &ano);
        }
        else
        {

            printf("digite o dia:");
            scanf("%d", &dia);
            printf("digite o mes:");
            scanf("%d", &mes);
            printf("digite o ano:");
            scanf("%d", &ano);

            printf("a data pra prioriadade normal eh:%d/%d/%d", dia, mes, ano);
        }

        printf("qual o nivel de prioridade:\n1-normal\n2-alta\n");
        scanf("%d", &prioridade);
    }

    return 0;
}
