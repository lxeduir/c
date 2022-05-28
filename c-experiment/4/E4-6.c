#include<stdio.h>
#define M 81

int fun(char *ss ,char c){
int i=0;
while (*ss)if(*ss++==c)i++;
return i;
}
void main(){
char a[M],ch;
printf("\nPlease enter a string:");
gets(a);
printf("\nPlease enter a char:");
ch=getchar();
printf("\nThe number of the char is:%d\n",fun(a,ch));

}