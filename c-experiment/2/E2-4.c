#include <stdio.h>
#include <stdlib.h>
int main()
{
double a,b,d,e;
char c,x;
scanf("%lf%c%lf%c%lf",&a,&x,&b,&c,&d);
if(c!='='||(x!='+'&&x!='-')){
	printf("Format error");
	return 0;
}
if(x=='+'){
	e=a+b;
}
else if(x=='-'){
	e=a-b ;
}
if(d==e){
	printf("Perfect!");
}
else{
	printf("error!\n");
	printf("%g%c%g%c%g\n",a,x,b,c,e);
	
	
}
system("pause");
}
