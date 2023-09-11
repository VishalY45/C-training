#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,i,j,*ptr,*ptr1;
	printf(" ENter array size\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	ptr1=(int*)malloc(sizeof(int)*size);
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\nDisplay element\n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
	for(i=0;i<size;i++)
	{
		ptr1[i]=ptr[i];
	}
	printf("\nAfter copy in second\n");
	for(i=0;i<size;i++)
	{
		printf("%d",ptr1[i]);
	}
}