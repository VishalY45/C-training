//Write a program in C to merge two arrays of same size sorted in decending order
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
	int size2;
	printf("\nEnter a size\n");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter array element\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("\nDisplay array");
	for(i=0;i<size2;i++)
	{
		printf("%d\t",arr2[i]);
	}
	//int k=0;
	int size3=size+size2;
	int arr3[size3];
	for(i=0;i<size;i++)
	{
		arr3[i]=arr[i];
	}
	for(j=0;j<size2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	for(i=0;i<size3;i++)
	{
		for(j=i+1;j<size3;j++)
		{
			if(arr3[i]<arr3[j])
			{
				int temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	printf("\nDisplay Reseult\n");
	for(i=0;i<size3;i++)
	{
		printf("%d\t",arr3[i]);
	}
	
}