#include<stdio.h>
void main(){
    char str1[81],str2[81];
    int j=0,flag;
    printf("\n");
    scanf("%s %s",str1,str2);
    while(str1[j]==str2[j]){
        j++;
        if(str1[j]=='\0'||str2[j]=='\0')
        break;
    }
    if(str1[j]=='\0'&&str2[j]=='\0')
    flag=1;
    else
    flag=0;
    if(flag)
    printf("the two string are equal.");
    else
    printf("the two steing are not equal.");
}
