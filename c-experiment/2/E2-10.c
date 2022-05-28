#include<stdio.h>

int main(){
int n,sum=0,x;
scanf("%d",&n);
while(n)
{
	x=n%10;
	n=n/10;
	sum=sum+x;
}
printf("%d",sum);
return 0;
}