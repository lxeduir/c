#include<stdio.h>
int fun(float a[20],int n)
{	int j;
	 float average=0,sum=0,max=a[0],min=a[0];
	for(j=0;j<n;j++)
	{
		sum+=a[j];
        		if(a[j]>max)max=a[j];
		else if(a[j]<min)min=a[j];
	}

	
	average=(sum-max-min)/(n-2);
	return average;
}
int main()
{
	float s[20]={0},i=0,n=0;
    for(i=0;;i++)
	{
		scanf("%d ",s);
		n++;
	}
	float ret=fun(s,n);
		printf("得分个数%d\n",n);
		printf("平均得分%d\n",ret);
		return 0;
}
