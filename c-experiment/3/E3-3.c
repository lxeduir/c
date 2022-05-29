#include<stdio.h>
int main(){
    char str[50];
    int i=0,num=0,str1=0,space=0,word=0,k;
    for(;i<=50;i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n')break;
    }
    for( k=0;k<i;k++){
        if(str[k]>='0'&&str[k]<='9')num++;
        else if((str[k]>='a'&&str[k]<='z')||(str[k]>='A'&&str[k]<='Z'))word++;
        else if(str[k]==32)space++;
        else str1++;
    }
    printf("英文字符:%d\n空格字符:%d\n数字字符:%d\n其他字符:%d\n总数:%d",word,space,num,str1,word+space+num+str1);
    return 0;
}
