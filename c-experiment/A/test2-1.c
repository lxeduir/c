sort(char *p, int m)
{
    int i;
    char change, *p1, *p2;
    for (i = 0; i <= m / 2; i++)
    {
        p1 = p + i;
        p2 = p + (m - 1 - i);
        change = *p1;
        *p1 = *p2;
        *p2 = change;
    }
}
#include "stdio.h"
main()
{
    int i, n;
    char *p, num[20], temp;
    printf("Enter n: ");
    scanf("%d", &n);
    temp = getchar();
    printf("Enter num[0] num[1] ... num[%d]:", n - 1);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    p = num;
    sort(p, n);
    printf("Result is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", num[i]);
}