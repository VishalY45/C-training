//WAP input 10 values in array find occurrence of array?
#include<stdio.h>
int main()
{
	int size,i,j,count=0;
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
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				arr[j]=-1;
			}
		}
		if(arr[i]!=-1)
		{
			printf("\n%d--->%d\n",arr[i],count);
		}
	}
}