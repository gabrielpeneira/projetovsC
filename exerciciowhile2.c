#include <stdio.h>
/*Visando automatizar as eleições, uma cidade decidiu implementar um programa para a análise e contagem dos votos. Esse programa deve ser capaz de receber 1000 votos (total esperado), que por sua vez obedecem a seguinte regra:

1-Voto para o candidato 1;
2-Voto para o candidato 2;
3-Voto para o candidato 3;
4-Voto para o candidato 4;
5-Voto nulo;
6-Voto em branco.
Elabore um algoritmo em C que calcule e escreva:

O total de votos para cada candidato e seu percentual sobre o total;
O total de votos nulos e o seu percentual sobre o total;
O total de votos em branco e o seu percentual sobre o total.*/
float calculaPercentual(int candidato,int eleitores){
    float percentual;
    percentual = candidato*100/eleitores;
return percentual;
}
int main(void)
{
    int voto,
    eleitores=10, 
    qtdVoto=0,
    jacare=0,
    porco=0,
    padeiro=0,
    miliciano=0,
    nulo=0,
    branco=0;

    while(qtdVoto<eleitores){

        printf("digite o numero do seu candidato\n1-jacare\n2-porco\n3-padeiro\n4-miliciano\n5-nulo\n6-branco\n");
        scanf("%d",&voto);

        if(voto==1){

        jacare++;
        }else if(voto==2){

        porco++;
        }else if(voto==3){

        padeiro++;
        }else if(voto==4){

        miliciano++;
        }else if(voto==5){

        nulo++;
        }else {branco++;}


        qtdVoto++;
    }

    printf("o total de votos de cada candidato eh:\n1-jacare %d\n2-porco %d\n3-padeiro %d\n4-miliciano %d\n5-nulo %d\n6-branco %d\n",jacare,porco,padeiro,miliciano,nulo,branco);
    
    printf("o percentual de votos do jacare eh:%.1f%%\n",calculaPercentual(jacare,eleitores));
    printf("o percentual de votos do porco eh:%.1f%%\n",calculaPercentual(porco,eleitores));
    printf("o percentual de votos do padeiro eh:%.1f%%\n",calculaPercentual(padeiro,eleitores));
    printf("o percentual de votos do miliciano eh:%.1f%%\n",calculaPercentual(miliciano,eleitores));
    printf("o percentual de votos nulos eh:%.1f%%\n",calculaPercentual(nulo,eleitores));
    printf("o percentual de votos em branco eh:%.1f%%\n",calculaPercentual(branco,eleitores));
    
    return 0;
}
