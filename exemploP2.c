#include <stdio.h>
int calculaVales(int qtdCompra, int valorCompra,int *qtVales, int *valorVales){

    if(qtdCompra<3){

        qtVales=0;
        valorVales=0;
    }else if(qtdCompra<=6){

        qtVales=6;
        valorVales=100 ;
    }
}
int busca(int v[], int val, int qtd)
{
int i;
for (i = 0; i &lt; qtd; i++)
if (v[i] == val)
return i;

return -1;
}
int inicializa(int v[], int val, int qtd)
{
int i;
for (i = 0; i &lt; qtd; i++)
v[i]= val;
return;
}
int main(void)
{
int matricula,zona,urgencia,codigo,qtdProd,indice,valorTotal=0;
float vTaxa[4] = {18,10,21,4};
float vUrg[3] = {0,4,10};
int vCatProd[8] = {12,23,34,45,56,78,89,90}; // código dos licores do catalogo
float vCatPr[8] = {10,20,30,20,20,30,10,40} // preço dos licores do catalogo

    printf("digite sua matricula:\n");
    scanf("%d",&matricula);
    printf("digite a zona de entrega:\n1-sul\n2-norte\n3-oeste\n4-centro\n");
    scanf("%d",&zona);
    printf("1-normal\n2-expressa\n3-imediata\n");
    scanf("%d",&urgencia);

    printf("digite o codigo e quantidade do produto:\n");
    scanf("%d %d",&qtdProd,&codigo);
        while(codigo=!0){

            indice=busca(vCatProd, codigo, 8);
            valorTotal+=(vCatPr[indice]*qtdProd)
            qtdTotal+=qtdProd;
            printf("digite o codigo e quantidade do produto:\n");
            scanf("%d %d",&qtdProd,&codigo);
        }
    
    printf("***cupom***\nMatricula:%d\nValor total:%d\nValor taxa de entrega:%d\nNumero de vales:%d\nvalor vales")

}