#include <stdio.h>
#include <stdlib.h>
char *subs(char *s, int n, int m)
{
    char *p;
    int i = 0;
    p = s;
    while (*p++ != NULL)
        i++;
    if (n < 0 || m < 0 || m < n || m > i)
    {
        printf("Substring invidal!%d\n", i);
        exit(0);
    }
    p = s + n;
    *(s + m + 1) = '\0';
    return (p);
}
void main()
{
    char *s1 = "The C programing language!";
    printf("%s\n", subs(s1, 4, 15));
}