#include<stdio.h>
#include<stdlib.h>

int main(){
	double a,b,d;
	char c;
	scanf("%lf%c%lf",&a,&c,&b);
	switch(c){
	case 42:d=a*b;break;
	case 43:d=a+b;break;
	case 45:d=a-b;break;
	case 47:d=a/b;break;
	}
	printf("%g\n",d);
	
	system("pause");
}