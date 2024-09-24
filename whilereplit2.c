#include "stdio.h"

/*Faça um programa que calcule o fatorial de um número.

  Esse programa deve receber como entrada um número inteiro positivo e imprimir na tela o fatorial dele.*/

int main(void) {

  int numero,contador=0,resultado=1,fatorial;
  printf("escreva um numero:\n");
  scanf("%d",&numero);

  fatorial= numero;
  while(contador<numero){

  resultado = resultado * fatorial;
    fatorial --;
    contador ++;
  }

  printf("o resultado de %i! é :%i",numero, resultado);
  return 0;
}