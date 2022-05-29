#include<stdio.h>
void main()
{
    int h=0,n=0,k;
    scanf("%d",&k);
    while((k>=2)&&(n<10))
    {
        if((k%13==0)||(k%17==0)){
            h=h+k;
            n++;
        }
        k--;
    }
    printf("%d\n",h);
}