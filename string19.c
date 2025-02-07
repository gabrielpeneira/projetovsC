#include <stdio.h>
#define TAM 3
/* . Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o
consumo desses carros, isto e, quantos quilometros cada um deles faz com um litro de ˆ
combustıvel. Calcule e mostre:
(a) O modelo de carro mais economico;
(b) Quantos litros de combust´ıvel cada um dos carros cadastrados consome para percorrer uma distancia de 1.000 quil ˆ ometros. */

int main(void)
{
    char modelos[TAM][20];
    float consumo[TAM];
    int i = 0, menorCon, indice;
    while (i < TAM)
    {
        printf("qual o modelo do carro?:\n");
        scanf(" %s", modelos[i]);
        printf("qual o consumo desse modelo por litro?:\n");
        scanf("%f", &consumo[i]);
        i++;
    }
    i = 0;
    menorCon = consumo[i];
    while (i < TAM)
    {
        if (consumo[i] < menorCon)
        {
            menorCon = consumo[i];
            indice = i;
        }
        i++;
    }
    printf("o modelo %s tem o menor consumo com %.2f kms/litro\n", modelos[indice], consumo[indice]);
    printf("consumo em 1000kms:\n");
    i = 0;
    while (i < TAM)
    {
        printf("modelo:%s \nconsumo:%.2f\n", modelos[i], consumo[i] * 1000);
        i++;
    }

    return 0;
}
