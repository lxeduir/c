#include <stdio.h>

void main (){
    char a[255],temp;
    FILE *fp;
    if((fp=fopen("test2-2.in","r"))==NULL)printf("cannot open file\n");
    fscanf(fp,"%s",a);
    int i;
    for(i=2;a[i]!='\0';i+=2)
    if(a[i]<a[i-2]){
        temp=a[i];
        a[i]=a[i-2];
        a[i-2]=temp;  
    }
    printf("%s",&a);
}