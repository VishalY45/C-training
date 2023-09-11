//Write a program to enter the 5 values in ascending order and store in array and find out the 
//missing element from array?
#include<stdio.h>
int main()
{
	int size,i,j,diff=0;
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
	printf("\n");
	for(i=0;i<size-1;i++)
	{
	
		for(j=arr[i];j<arr[i+1]-1;)
		{
		   printf("%d\t",++j);	
	}
	
	}
}
