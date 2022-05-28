#include<stdio.h>
#include<stdlib.h>

int main(){
double a,x;
scanf("%lf",&x);
if(x<0){
printf("y=0\n");
}else if(0<=x&&x<10){
printf("y=%g\n",x);
}else if(10<=x&&x<20){
printf("y=10\n");
}else if(20<=x&&x<40){
	printf("%g",20-(0.5*x));
}else{
printf("输入x的值有误\n");
}
system("pause");

}