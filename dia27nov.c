#include <stdio.h>

#define TAM 8

void consulta(int *vCodigo, int *vValor, int *vLugar, int qtd, int numCod)
{
    int pedido;
    for (int i = 0; i < qtd; i++)
    {
        if (numCod == vCodigo[i])
        {
            printf("\nA passagem solicitada custa: %d\n", vValor[i]);
            printf("%d lugares estão disponíveis.\n", vLugar[i]);
            printf("Quantos lugares deseja? ");
            scanf("%d", &pedido);

            if (pedido <= vLugar[i])
            {
                vLugar[i] -= pedido;
                printf("Reserva realizada com sucesso! %d lugares restantes.\n", vLugar[i]);
            }
            else
            {
                printf("Não há lugares suficientes disponíveis.\n");
            }
            return; 
        }
    }
    printf("Código de passagem não encontrado.\n");
}

int main(void)
{
    int numCod;
    int codigo[TAM] = {1, 2, 3, 4, 5, 6, 7, 8};
    int valor[TAM] = {110, 120, 130, 140, 150, 160, 170, 180};
    int lugarDisp[TAM] = {5, 5, 5, 5, 5, 5, 5, 5};

    while (1)
    {
        printf("Digite o código da passagem (0 para sair): ");
        scanf("%d", &numCod);

        if (numCod == 0)
        {
            printf("Programa encerrado.\n");
            break;
        }

        consulta(codigo, valor, lugarDisp, TAM, numCod);
    }

    return 0;
}