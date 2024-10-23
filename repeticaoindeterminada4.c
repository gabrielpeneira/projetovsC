#include <stdio.h>
/*Uma lanchonete aceita 4 formas de pagamento: cartão de crédito, cartão de débito, dinheiro e ticket
refeição. Faça um programa em C para exibir o valor a ser devolvido (troco) a um cliente ou a mensagem
“Não há troco”. Inicialmente, o seu programa deverá ler o valor da despesa a ser paga (real) pelo cliente e o
tipo de pagamento (inteiro): 1 para cartão de débito, 2 para cartão de crédito, 3 para dinheiro ou 4 para
ticket. Se o pagamento for realizado por cartão (débito ou crédito), não há troco. Para os demais tipos de
pagamento, pode ou não haver troco. Se for pagamento em dinheiro, será lido o valor pago. Se o pagamento
for com tickets, devem ser lidos a quantidade de tickets e o valor de cada ticket (repare que os valores podem
ser diferentes).

a) seu programa deve processar a despesa de apenas UM cliente.

b) Modifique para vários clientes. Término valor == 0*/

int main(void)
{
    float valorPago, valorProduto, troco, valorTicket, totalTicket;
    int qtdTickets, tipoPagamento, contador = 0;
    printf("\nqual o valor do produto?");
    scanf("%f", &valorProduto);

    while (valorProduto != 0)
    {
        printf("\nqual a forms de pagamento?");
        scanf("%d", &tipoPagamento);

        if (tipoPagamento == 3)
        {

            printf("\nqual o valor pago?");
            scanf("%f", &valorPago);

            troco = valorPago - valorProduto;

            printf("\no seu troco eh:%f", troco);
        }
        else if (tipoPagamento == 4)
        {

            printf("\nquantos tickets ?");
            scanf("%d", &qtdTickets);

            while (qtdTickets > contador)
            {

                contador++;
                printf("\ndigite o valor do %d ticket", contador);
                scanf("%f", &valorTicket);
                totalTicket += valorTicket;
            }
            troco = totalTicket - valorProduto;
            printf("\nseu troco eh:%.2f", troco);
        }
        else
        {

            printf("\nnao ha troco");
        }
        printf("\nqual o valor do produto?(digite 0 para finalizar)");
        scanf("%f", &valorProduto);
    }
    return 0;
}
