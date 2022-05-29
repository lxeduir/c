#include <stdio.h>
#include <string.h>
void fun(char *s)
{
   int i;
	for (i = strlen(s); i > 0; --i)
	{
		*(s + 2 * i) = *(s + i);
		*(s + 2 * i - 1) = ' ';
	}
}

void main()
{
   char a[20];
   printf("请输入一个字符串:\n");
   gets(a);
   fun(a);
   printf("新字符串是：\n");
   puts(a);
}