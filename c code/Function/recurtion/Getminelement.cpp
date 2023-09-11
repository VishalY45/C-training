#include<stdio.h>
int i=0;
int getmin(int a[],int size,int min)
{
	if(i<size)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		i++;
		getmin(a,size,min);
	}
	return min;
}
int main()
{
	int size;
	printf(" Enter a size of array\n");
	scanf("%d",&size);
	int a[size];
	int min=a[0];
	printf(" Enter a array element\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int result=getmin(a,size,min);
	printf("Minimum no is:-%d",result);
}