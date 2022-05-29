#include<stdio.h>
#include<string.h>
void fun (char *s, char *t)
{
int i, j, sl;
sl = strlen(s);
if(sl%2)
sl--;
else
sl-=2;
for (i=sl, j=0; i>=0; i-=2) {
t[2*j] = s[i];
t[2*j +1] = s[i];
j++;
}

t[2*j] = '\0'; 
}
void main()
{
char s[100], t[100];
printf("\nPlease enter string s:"); scanf("%s", s);
fun(s, t);
printf("The result is: %s\n", t);
}