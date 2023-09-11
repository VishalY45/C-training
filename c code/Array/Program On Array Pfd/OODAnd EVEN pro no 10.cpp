//Write a program in C to separate odd and even integers in separate arrays ?
#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nDisplay array");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nThe Even no\n");
		for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\t",arr[i]);
		}
	}
	printf("\nThe odd no\n");
		for(i=0;i<size;i++)
	{
		if(arr[i]%2==1)
		{
		   printf("%d\t",arr[i]);	
		}
	}
}