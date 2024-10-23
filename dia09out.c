#include <stdio.h>
int ehMaior3(int n1, int n2, int n3)
{

    int teste = ehMaior2(n1, n2);
    int maior = ehMaior2(teste, n3);

    return maior;
}
int ehMaior2(int n1, int n2)
{

    int maior;
    maior = n1;
    if (n1 < n2)
    {
        maior = n2;
    }
    return maior;
}
int main(void)
{
    int n1, n2, n3;
    printf("escreva 3 idades");
    scanf("%i %i %i", &n1, &n2, &n3);

    printf("%i", ehMaior3(n1, n2, n3));

    return 0;
}
