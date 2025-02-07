#include <stdio.h>

/*Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
desconto para pagamento a vista ` e de 10% sobre o valor total, calcular o valor a ser ´
pago a vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor `
a ser pago a vista. */

int main(void)
{
    char nome[20];
    float preco, desconto;

    printf("digite o nome e o valor da mercadoria:");
    scanf("%s %f", nome, &preco);

    desconto = (preco / 100) * 10;

    printf("a mercadoria:%s custa:%.2f, para pagamento a vista ha um desconto de %.2f, total:%.2f", nome, preco, desconto, (preco - desconto));

    return 0;
}
