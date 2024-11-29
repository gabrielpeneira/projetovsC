#include <stdio.h>
void le_dados(int *numero)
{
    scanf("%d", numero);
}
void maior(int num1, int num2, int *max)
{

    if (num1 > num2)
    {
        *max = num1;
    }   
    else
    {
        *max = num2;
    }
}
void calculos(int num1, int num2, int *soma)
{

    *soma = num1 + num2;
}

int main(void)
{
    int num1, num2, max, soma;

    printf("Informe um numero inteiro\n");
    le_dados(&num1); // captura um número do teclado
    printf("Informe outro numero inteiro\n");
    le_dados(&num2);

    maior(num1, num2, &max);
    // armazena em Max o maior valor entre os fornecidos
    calculos(num1, num2, &soma);

    printf("O maior numero e %d\n", max);
    printf("A media dos numeros e %.2f\n", (float)soma / 2); // obs
    printf("A soma dos numeros e %d\n", soma);
    return 0;
}