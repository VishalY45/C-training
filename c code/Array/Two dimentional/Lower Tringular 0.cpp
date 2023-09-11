#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter a size\n");
	scanf("%d",&size);
	int arr[size][size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Display array\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		   if(j<i)
		   {
		   	arr[i][j]=0;
			   }	
		}
	}
	printf("Display Result\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
}