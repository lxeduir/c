#include <stdio.h>
#include <time.h>
#define N 5

void main()
{
    int a[N][N], i, j, k, t;
    printf("  THE ARRAY\n");
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = rand() % 30;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    i = 0;
    j = N - 1;
    while (i < j)
    {
        for (k = 0; k < N; k++)
        {
            t = a[i][k];
            a[i][k] = a[j][k];
            a[j][k] = t;
        }
        i++;
        j--;
    }
    printf("\n THE RESULT   \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}
