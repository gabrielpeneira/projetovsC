#include <stdio.h>

void recomendacao(int area, float cr, float *percentMin, float *percentMax)
{
    if (area == 1)
    {
        if (cr >= 9)
        {
            (*percentMin) = 30;
            (*percentMax) = 40;
        }
        else if (cr >= 8)
        {
            (*percentMin) = 10;
            (*percentMax) = 15;
        }
    }
    else
    {
        if (cr >= 9)
        {
            (*percentMin) = 30;
            (*percentMax) = 35;
        }
        else if (cr >= 8)
        {
            (*percentMin) = 10;
            (*percentMax) = 12;
        }
    }
    if (cr < 7)
    {

        (*percentMin) = 5;
        (*percentMax) = 5;
    }
    else
    {

        (*percentMin) = 0;
        (*percentMax) = 0;
    }
}

int main(void)
{
    float percentual1, percentual2;

    recomendacao(2, 9, &percentual1, &percentual2);

    printf("percentual minimo: %.2f%%\n", percentual1);
    printf("percentual maximo: %.2f%%\n", percentual2);
    return 0;
}
