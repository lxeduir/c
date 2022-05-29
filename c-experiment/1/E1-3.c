#include<stdio.h>
void main()
{
	float b,c;
	int a=5,d,e;
	printf("a=%d\n",a);
	printf("请输入b,c:");
	scanf("%f %f",&b,&c);
	printf("b=%f,c=%f\n",b,c);
	printf("请输入d,e:");
	scanf("%d %d",&d,&e);
	printf("余数=%d\n",d%e);
}