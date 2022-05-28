#include <stdio.h>
void fun(char *tt, int pp[])
{
    int i;
    for (i = 0; i < 26; i++)pp[i] = 0;
    while (*tt)if (*tt >= 'a' && *tt <= 'z') pp[(*tt++) - 'a'] += 1;
    
}
void main()
{s
    char aa[100];
    int bb[26], k, n;
    printf("\nPlease enter a char string:");
    scanf("%s", aa);
    fun(aa, bb);
    for (k = 0; k < 26; k++)
        printf("%d ", bb[k]);
    printf("\n");
}