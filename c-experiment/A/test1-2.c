#include <stdio.h>
void creat(int n)
{
    int i, j, a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, s;
    for (i = 0; i < n; i++)
    {
        s = 1 + i * 4;
        for (j = 0; j <= i; j++)
        {
            printf("%d\t", s);
            s += 2;
        }
        printf("\n");
    }
}

int main()
{
    int m;
    AA: scanf("%d", &m);
    if(m<1||m>10){
        printf("error\n");
        goto AA;
    }
    else creat(m);

   
}