#include <stdio.h>
#define N 10
int a[N][N];
void creat(int n)
{
    int i, j, s;
    for (i = 0; i < n; i++)
    {
        s = 1 + i * 4;
        for (j = 0; j <= i; j++)
        {
            a[i][j] = s;
            printf("%d\t", a[i][j]);
            s += 2;
        }
        printf("\n");
    }
}

int main()
{
    int m, i, j;
AA:
    scanf("%d", &m);
    if (m < 1 || m > 10)
    {
        printf("error\n");
        goto AA;
    }
    else
        creat(m);
    FILE *fp;
    if ((fp = fopen("test1-2.dat", "w")) == NULL)
        printf("cannot open file\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <= i; j++)
      fprintf(fp, "%d\t", a[i][j]);
      fprintf(fp, "\n");
    }
    fclose(fp);
}