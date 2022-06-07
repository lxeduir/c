#include <stdio.h>
#include <string.h>
int fun(char *s, char *t1, char *t2, char *w)
{
    int i;
    char *p, *r, *a;
    strcpy(w, s);
    while (*w)
    {
        p = w;
        r = t1;
        while (*r)
            if (*r == *p)
            {
                r++;
                p++;
            }
            else
                break;
        if (*r == '\0')
            a = w;
        w++;
    }
    r = t2;
    while (*r)
    {
        *a = *r;
        a++;
        r++;
    }
}
main()
{
    char s[100], t1[100], t2[100], w[100];
    printf("\nPlease enter string S:");
    scanf("%s", s);
    printf("\nPlease enter substring t1:");
    scanf("%s", t1);
    printf("\nPlease enter substring t2:");
    scanf("%s", t2);
    if (strlen(t1) == strlen(t2))
    {
        fun(s, t1, t2, w);
        printf("\nThe result is : %s\n", w);
    }
    else
        printf("\nError : strlen(t1) != strlen(t2)\n");
}