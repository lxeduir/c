#include <stdio.h>
#include <string.h>
void fun(char a[ ], int b[ ])
{
    int i,j,k,al;
    al=strlen(a);
    b[5]=al;
    for(i='a';i<='e';i++){
        k=0;
        for(j=0;j<al;j++)if(a[j]==i)k++;
        b[i-'a']=k;
        b[5]-=k;
    }
}
void main()
{ int i, b[6]; char a[100] = "bacd1b+ddep";
fun(a, b);
printf("The result is: ");
for (i=0; i<6; i++) printf("%d ", b[i]);
printf("\n");
}