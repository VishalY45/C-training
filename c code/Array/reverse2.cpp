#include<stdio.h>
int main()
{
	int a[5],i,j;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter a element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf(" Display matrix\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf(" \nAfter reverse");
	for(i=0;i<len;i++)
	{
		printf("a[%d]---%d\n",i,a[i]);
	}
}