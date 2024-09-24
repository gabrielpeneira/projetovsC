#include <stdio.h>
/*Desenvolva um programa que tenha como entrada a altura de 15 pessoas e imprima os seguintes cálculos:

A menor altura do grupo;
A maior altura do grupo.
*/

int main(void)
{
    
    int menorAltura,altura,maiorAltura=0,numPessoas=1;

    while(numPessoas<=3){
    printf("qual a altura da pessoa %i\n",numPessoas);
    scanf("%d",&altura);

    if(numPessoas==1){

        menorAltura=altura;
    }else if(menorAltura<altura){

        menorAltura=altura;
    }
    numPessoas++;
    }

printf("a maior altura eh:%d",menorAltura);
    return 0;
}
