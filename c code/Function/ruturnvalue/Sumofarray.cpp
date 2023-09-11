#include<stdio.h>
int main()
{
	int sum(int[]);
	int a[5];
	printf(" ENter array element\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int result=sum(a);
	printf("The sum is %d\n",result);
}
int sum(int a2[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a2[i];
	}
	return sum;
}