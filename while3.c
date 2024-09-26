#include <stdio.h>

/*Faça um programa que dado um número inteiro positivo digitado pelo usuário imprima o próximo número primo.*/

int main(void) {

  int numero, contador = 1,testeprimo, primo=0, resultado, contadorPrimo=0, contadorComposto=0;

  printf("escreva um nunero inteiro");
  scanf("%i",&numero);

  numero = testeprimo;
  while(primo==1){

   testeprimo++ ;

    while(contador<testeprimo){

      resultado = testeprimo % contador;

      if(resultado==testeprimo){

        contadorPrimo++;
      }
      contador++;
    }

    if(contadorPrimo==testeprimo-2){

      primo++;
    }
  }

  printf("%d eh o primeiro primo apos %d",testeprimo,numero);
  return 0;
}