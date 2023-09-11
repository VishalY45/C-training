//Write a program in C to find a pair with given sum in the array
#include<stdio.h>
int main()
{
	int size,i,j,sum=0,flag=0;
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
	printf("Enter a sum\n");
	scanf("%d",&sum);
	for(i=0;i<size-1;i++)
	{
		flag=0;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]+arr[j]==sum)
			{
			    flag=1;
				break;	
			}
		}
		if(flag)
		{
			printf("Pair of elements can make the given sum by the value of index %d and %d\n",i,j);
		}
	}
}