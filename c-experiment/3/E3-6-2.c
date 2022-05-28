#include <stdio.h>
void main()
{
    int m, i, j, a[20][20];
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            a[i][j] = (i + 1) * (j + 1);
            for(i=0;i<m;i++){
                for(j=0;j<m;j++)printf("%-5d",a[i][j]);
                printf("\n");
            }
}