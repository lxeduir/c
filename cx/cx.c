#include<stdio.h>
#define N 5
int a[1][1],n;
void creat(int n){
int i,j;
for(i=1;i<n;i++){
a[i][0]=a[i-1][0]+4;
for(j=1;j<i+1;j++){
a[i][j]=a[i][j-1]+2;
}
}
for(i=0;i<n;i++){
for(j=0;j<i+1;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
int main(){
a[0][0]=1;
scanf("%d",&n);
creat(n);
return 0;
}
