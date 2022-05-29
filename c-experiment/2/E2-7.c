#include<stdio.h>
int main(){
	int i,j,k;
                while(1){
	scanf("%d",&i);
if(i<100&&i>=0)break;
printf("输入错误重新输入：");                 
}
	j=i*i;
	j=i%10;
               k=i%100;
	if(i==j&&i<10){
	printf("YES");
	}else if (i==k&&i>10)
	{
		printf("YES");
	}else{
	printf("NO");
	}


return 0;
  }