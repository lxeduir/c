#include<stdio.h>
void main(){
    int m,i,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++)
        printf("%-5d",j*i);
        printf("\n");
    }
}
