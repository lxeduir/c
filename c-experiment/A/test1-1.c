#include <stdio.h>
void fun(long s, long *t)
{
    *t=0;
    long s1=1;
    while (s > 0)
    {
    *t = *t+ (s/10 % 10)*s1;
    s/=100;
    s1*=10;
   
    }
}
void main()
{
    long s, t;
    scanf("%ld", &s);
    if (s > 0)
    {
        fun(s, &t);
        printf("%ld\n", t);
    }
    else
        printf("s value error\n");
}