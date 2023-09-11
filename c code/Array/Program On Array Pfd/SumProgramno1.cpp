// WAP to enter the five elements in array and calculate the sum of all elements
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
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nThe Sum Is %d",sum);
}