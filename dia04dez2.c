#include <stdio.h>

#define MAX_FUNCIONARIOS 10
#define MAX_PRODUTOS 5

void inicializar(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        arr[i] = 0;
    }
}

int procurar(int arr[], int tamanho, int valor)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] == valor)
            return i;
    }
    return -1;
}

void mostrar_dados(int funcionarios[], int itens_vendidos[], int valor_total_vendas[], int vendas_por_produto[], int produtos[], int precos_produtos[])
{
    int i;
    printf("\nValor médio por unidade de cada funcionário:\n");
    for (i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        if (itens_vendidos[i] > 0)
        {
            printf("\nFuncionário %d: %.2f", funcionarios[i],
                   (float)valor_total_vendas[i] / itens_vendidos[i]);
        }
        else
        {
            printf("\nFuncionário %d: Sem vendas", funcionarios[i]);
        }
    }
    int maior_venda = 0;
    for (i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        if (valor_total_vendas[i] > maior_venda)
            maior_venda = valor_total_vendas[i];
    }
    printf("\nFuncionário(s) com maior total vendido:");
    for (i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        if (valor_total_vendas[i] == maior_venda)
            printf("\nFuncionário %d", funcionarios[i]);
    }
    printf("\nProdutos com vendas acima de 100 unidades:");
    for (i = 0; i < MAX_PRODUTOS; i++)
    {
        if (vendas_por_produto[i] > 100)
        {
            printf("Produto %d, com %d unidades vendidas\n", produtos[i], vendas_por_produto[i]);
        }
    }
    int maior_valor_produto = 0;
    int produto_top_vendas = -1;
    for (i = 0; i < MAX_PRODUTOS; i++)
    {
        int valor_total = vendas_por_produto[i] * precos_produtos[i];
        if (valor_total > maior_valor_produto)
        {
            maior_valor_produto = valor_total;
            produto_top_vendas = produtos[i];
        }
    }
    printf("\nProduto com maior valor vendido: %d", produto_top_vendas);
    return;
}

int main(void)
{
    int funcionarios[MAX_FUNCIONARIOS] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int produtos[MAX_PRODUTOS] = {1, 2, 3, 4, 5};
    int precos_produtos[MAX_PRODUTOS] = {10, 20, 30, 40, 50};
    int itens_vendidos[MAX_FUNCIONARIOS];
    int valor_total_vendas[MAX_FUNCIONARIOS];
    int vendas_por_produto[MAX_PRODUTOS];
    inicializar(itens_vendidos, MAX_FUNCIONARIOS);
    inicializar(valor_total_vendas, MAX_FUNCIONARIOS);
    inicializar(vendas_por_produto, MAX_PRODUTOS);
    int codigo_funcionario, indice_funcionario;
    int codigo_produto, indice_produto, quantidade;
    int entrada_valida = 1;
    int contador = 0;
    while (contador < MAX_FUNCIONARIOS && entrada_valida)
    {
        printf("\nInforme o código do funcionário (ou um código inválido para encerrar): ");
        scanf("%d", &codigo_funcionario);
        indice_funcionario = procurar(funcionarios, MAX_FUNCIONARIOS, codigo_funcionario);
        if (indice_funcionario == -1)
        {
            printf("\nCódigo do funcionário inválido.");
            entrada_valida = 0;
        }
        else
        {
            printf("\nInforme o código do produto: ");
            scanf("%d", &codigo_produto);
            indice_produto = procurar(produtos, MAX_PRODUTOS, codigo_produto);
            if (indice_produto == -1)
            {
                printf("\nCódigo do produto inválido.");
                entrada_valida = 0;
            }
            else
            {
                printf("\nInforme a quantidade vendida: ");
                scanf("%d", &quantidade);
                int total_venda = precos_produtos[indice_produto] * quantidade;
                itens_vendidos[indice_funcionario] += quantidade;
                valor_total_vendas[indice_funcionario] += total_venda;
                vendas_por_produto[indice_produto] += quantidade;
                contador++;
            }
        }
    }
    mostrar_dados(funcionarios, itens_vendidos, valor_total_vendas, vendas_por_produto, produtos, precos_produtos);
    return 0;
}