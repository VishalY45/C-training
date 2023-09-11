//Write a program in C to find the second largest element in an array ?
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
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
			}
			
		}
	}
	printf("\nThe Second Largest Element %d\n",arr[1]);
}