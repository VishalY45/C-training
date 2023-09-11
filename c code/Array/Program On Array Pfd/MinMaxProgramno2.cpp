#include<stdio.h>
// WAP to enter the five elements in array and find out the maximum and minimum elements
int main()
{
	int size,i,j,max=0;
	printf("Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	int min=arr[0];
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
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("\nMIN %d",min);
	printf("\nMAX %d\n",max);
}