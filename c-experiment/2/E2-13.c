#include<stdio.h>
#include<math.h>
void main()
{
    int m;
    double s=0;
    scanf("%d",&m);
    for(;m>0;m--){
        s+=log(m);
    }
    s=sqrt(s);
    printf("%f",s);
}
