#include <stdio.h>

float calculaReajuste(float valorAtual, float valorReajuste){

    float diferenca = valorReajuste - valorAtual;

    float percentual = (diferenca * 100) / valorAtual;

    return percentual;
}
float recalculaReajuste(float valorAtual){

    float percentual;

    percentual = 0.07 * valorAtual;

    return percentual + valorAtual;

}

void exibeReajuste(float percentual, float recalculo){

    if(percentual<=7){

        printf("o resjuste da passagem eh de %f %%",percentual);
    }else printf("este reajuste eh inconstitucioanal, o valor maximo permitido para esse valor eh: %.2f reais",recalculo);
}

int main()
{
    float valorAtual, valorReajuste;

    printf("digite o valor atual da passagem :\n");
    scanf("%f",&valorAtual);

    printf("digite o valor reajustado da passagem :\n");
    scanf("%f",&valorReajuste);

    exibeReajuste(calculaReajuste(valorAtual,valorReajuste),recalculaReajuste(valorAtual));
    
    return 0;
}
