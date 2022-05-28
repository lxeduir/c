#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	float deposit,rate,a=1,capital;
	scanf("%f,%d,%f",&rate,&n,&capital);
	rate=rate/100;
	for( i=0;i<n;i++)
	{	
		a=a*(1+rate);
	}
		deposit=capital*a;
		printf("deposit=%f\n",deposit);
		system("pause");
}
