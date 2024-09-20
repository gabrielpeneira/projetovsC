#include <stdio.h>


int calcula_Media_dos_bimestres(int nota1, int nota2, int nota3, int nota4){
int media;

media = (nota1 + nota2 + nota3 + nota4) / 4;

return media;
}
int sucesso_de_media(int media){
int suceso_da_meida;

suceso_da_meida = media + 1;

return suceso_da_meida;
}


int main(void)
{
    int nota1, nota2, nota3, nota4;



printf("qual ser nota de bimestres (son cuatro) repsctmavente!");
scanf("%i %i %i %i", &nota1, &nota2, &nota3, &nota4);

int sucessor = sucesso_de_media(calcula_Media_dos_bimestres(nota1, nota2, nota3, nota4));
printf("a sua meda e %i\n", calcula_Media_dos_bimestres(nota1, nota2, nota3, nota4));

printf("e. o suceso dela. e %i",sucessor);

    return 0;
}
