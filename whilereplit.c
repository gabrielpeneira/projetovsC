#include <stdio.h>
/*Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado.*/

int main() {

int numero,maior,menor,contador=1;

  
  while(contador <=15){

    printf("escreva o %i° numero",contador);
    scanf("%i",&numero);

    if(contador==1){

      maior =numero;
      menor =numero;
    }else if(numero>maior){

      maior= numero;
    }else if(numero<menor){

      menor=numero;
    }
    contador++;
  }

  printf("\no maior número é %i e o menor numero é %i",maior,menor);
  
}