#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter a size\n");
	scanf("%d",&size);
	int a[size][size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nDisplay matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i==j)
			{
				a[i][j]=0;
			}
		}
	}
	printf("Result matix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}