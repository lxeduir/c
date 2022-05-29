#include <stdio.h>
#include <string.h>
void fun(char s[], char t[], char u[])
{
    int i, j, sl, tl, k=0;
    sl = strlen(s);
    tl = strlen(t);
    for (i = 0; i < sl; i++)
    {
        for (j = 0; j < tl; j++)
            if (s[i] == t[j])
                break;
        if (j == tl)
            u[k++] = s[i];
    }
    for (i = 0; i < tl; i++)
    {
        for (j = 0; j < sl; j++)
            if (t[i] == s[j])
                break;
        /************found************/
        if (j == sl)
            u[k++] = t[i];
    }
    /************found************/
    u[k] = '\0';
}
void main()
{
    char s[100], t[100], u[100];
    printf("\nPlease enter string s:");
    scanf("%s", s);
    printf("\nPlease enter string t:");
    scanf("%s", t);
    fun(s, t, u);
    printf("The result is: %s\n", u);
}