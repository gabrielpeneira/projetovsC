#include <stdio.h>
#include <math.h>
float det_bonus(float salario,float numProjetos){

    int contador=0,r=0.05,acumulador=1;
    while(numProjetos>contador){

        acumulador+= pow(r,contador);
        contador ++;
    }
    return acumulador;
}
void exibe_salario_bom_bonus(int matricula,float salario,int numProjetos){

        printf("\nmatricula:%i",matricula);
        printf("\nsalario atual:%.2f",salario);
        printf("\nnumero de projetos:%i",numProjetos);
        printf("\nbonus:%.2f",det_bonus(salario,numProjetos));
        printf("\ntotal salario com bonus:%f",salario+det_bonus(salario,numProjetos));

}
int main(void){

    int matricula=1, numProjetos;
    float salario; 
    
    while(matricula>0){
        printf("\nmatricula?");
        scanf("%d",&matricula);

        printf("\nquantos projetos?");
        scanf("%d",&numProjetos);

        printf("\nqual seu salario?");
        scanf("%f",&salario);

        exibe_salario_bom_bonus(matricula,salario,numProjetos);
    }

    printf("fim do programa");
    return 0;
}
