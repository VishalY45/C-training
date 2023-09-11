#include<stdio.h>
int main()
{
	int size,index,i,j;
	printf(" Enter a arra size\n");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Enter a rotate array index\n");
	scanf("%d",&index);
	for(i=0;i<index;i++)
	{
	   int temp=arr[0];
	   for(j=1;j<size;j++)
	   {
	   	arr[j-1]=arr[j];
	   }
	   arr[size-1]=temp;
		   	
	}
	printf("\nResult matrix\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]--->%d\n",i,arr[i]);
	}
}