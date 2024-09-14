#include <stdio.h>

float calculaReajuste(float valorAtual, float valorReajuste){

    float diferenca = valorReajuste - valorAtual;

    float percentual = (diferenca * 100) / valorAtual;

    return percentual;
}

void exibeReajuste(float percentual){

    if(percentual<=7){

        printf("o resjuste da passagem eh de %f %%",percentual);
    }else printf("este reajuste eh inconstitucioanal");
}

int main()
{
    float valorAtual, valorReajuste;

    printf("digite o valor atual da passagem :\n");
    scanf("%f",&valorAtual);

    printf("digite o valor reajustado da passagem :\n");
    scanf("%f",&valorReajuste);

    exibeReajuste(calculaReajuste(valorAtual,valorReajuste));
    
    return 0;
}
