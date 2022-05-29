#include<stdio.h>
#define PI 3.1415926
void main(){
	int r;
	float c,s;
	scanf("%d",&r);
	c=2*PI*r;
	s=PI*r*r;
	printf("周长为:%f\n面积为:%f\n",c,s);
}