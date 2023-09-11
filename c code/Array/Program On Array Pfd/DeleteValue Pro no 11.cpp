//. Write a program in C to delete an element at desired position from an array
#include<stdio.h>
int main()
{
	int size,i,j,sum=0;
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
	int value;
	printf("Enter a value\n");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			sum=1;
			break;
		}
	}
	if(sum)
	{
		for(j=i;j<size;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	printf("Display Result\n");
	for(i=0;i<size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}