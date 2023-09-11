#include<stdio.h>
int main()
{
	int a[5],i,j,temp=0;
	printf(" Enter a array element\n");
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" After reverse it\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf(" After swaping\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
}