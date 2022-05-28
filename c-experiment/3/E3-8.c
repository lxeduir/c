#include <stdio.h>
#include <string.h>
void fun(char s[], char t[])
{
    int i, sl;
    sl = strlen(s);
    for (i = 0; i < sl; i++)
    {
        t[2 * i] = s[sl - i - 1];
        t[2 * i + 1] = s[sl - i - 1];
    }
    t[sl * 2] = '\0';
}
void main()
{
    char s[100], t[100];
    printf("\nPlease enter string s:");
    scanf("%s", s);
    fun(s, t);
    printf("The result is: %s\n", t);
}