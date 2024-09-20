#include <stdio.h>

int classificar_turno(int horario){

int turno;

if(horario<6){

    turno = 1;
}else if(horario<12){

    turno = 2;
}else if(horario<18){

    turno = 3;
}else turno = 4;

return turno;
}

void tarefa_por_turno(int turno, int idade){
if(turno == 1){
    printf("vai dormir lazarento, olha a hora");
}else if(idade<12){
    printf("vai assistir tv globinho, crianca");
}else if(idade<18){
    if(turno==3){
        printf("vai fazer seus deveres de casa");
    }else printf("vai estudar jovem");
}else if(turno == 2){
    printf("faca exercicios");
}else if(turno == 3){
    printf("vai trabalhar vagabundo");
}else printf("relaxa ai tiozinho, ta pilhadao");

}
 int main(void)
{
    int horario, idade;
    
    printf("digite o hora e dua idade que eu vou te dar uns conselhos personalizados");
    scanf("%d %d",&horario,&idade);

    tarefa_por_turno(2,19);

    return 0;
}
