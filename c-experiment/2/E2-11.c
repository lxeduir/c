#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j = 1, k = 1, l;
	srand(time(NULL));
	i = rand() % 10 + 1;
	while (j)
	{
		printf("请猜数字：");
		scanf("%d", &l);
		system("cls");
		if (i == l)
		{
			printf("%d次猜对\n", k);
			j = 0;
		}
		if (i < l)
		{
			printf("猜大了\n");
			k++;
		}
		if (i > l)
		{
			printf("猜小了\n");
			k++;
		}
	}
	system("pause");
	return 0;
}