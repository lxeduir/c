#include <stdio.h>
long fun(char s[])
{
    int  k=0,sum = 0;
    for(k=0;s[k] >= '0' && s[k] <= '9'&&s[k]!='\0';k++)sum=sum*10+s[k]-'0';
    return sum;
}
void main()
{
    char s[10];
    long a;
    gets(s);
    a = fun(s);
    printf("%ld\n", a);
}