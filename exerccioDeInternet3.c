int main(int argc, char const *argv[])
{
    int m[5][5];
    int i, j, contador;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {

            if (contador % 6 == 0)
            {

                m[i][j] = 1;
            }
            else
            {
                m[i][j] = 0;
            }
            contador++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {

            printf("%d", m[i][j]);
        }
    }
    return 0;
}
