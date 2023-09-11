//WAP to enter the five element in array and reverse it ?
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
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	printf("\nDisplay Result\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]-->%d\n",i,arr[i]);
	}

}