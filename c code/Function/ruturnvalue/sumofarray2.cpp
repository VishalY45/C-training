#include<stdio.h>
int main()
{
	int sum(int[],int size);
	int size;
	printf(" ENter a size");
	scanf("%d",&size);
	int a[size],i;
	printf(" ENter array elment\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int result=sum(a,size);
	printf(" Sum is %d",result);
	
}
int sum(int a[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
   return sum;
}
