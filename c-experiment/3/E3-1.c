#include<stdio.h>
void main(){
    int a[3][3],i,j,k,flag,max,col;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        max=a[i][0];
        col=0;
        for(j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
                col=j;
            }
        }
        flag=1;
        for(k=0;k<3;k++){
            if(max>a[k][col]){
                flag=2;
                break;
            }
        }
        if(flag==1){
            printf("row=%d, column=%d, value=%d\n",i+1,col+1,max);
        }
    }
}
