#include<stdio.h>
int main(){
    int a,k,i,aa[20];
    printf("\nPlase erter anumber and a base:\n");
    scanf("%d %d",&a,&k);
    for(i=0;a;i++){
        aa[i]=a%k;
        a/=k;
    }
    for(;i;i--)printf("%d",aa[i-1]);
    return 0;
}