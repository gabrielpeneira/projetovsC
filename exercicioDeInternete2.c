#include <stdio.h>

int main(void)
{
    int v[10];
    int i;
    for (i = 0; i < 10; i++)
    {

        printf("digite o %d valor:", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 9; i > -1; i--)
    {

        printf("%d", v[i]);
    }
    return 0;
}
