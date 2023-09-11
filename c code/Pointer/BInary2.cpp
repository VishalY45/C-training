#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,size1,i,j,*ptr,*ptr1;
	printf(" Enter a size\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	ptr1=(int*)malloc(sizeof(int)*size);
	printf(" ENter frist array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Entr a second array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr1[i]);
	}
	printf("\nDIsplay Frist array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nDIsplay second array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ptr1[i]);
	}
	for(i=0;i<size;i++)
	{
		int temp=ptr[i];
		ptr[i]=ptr1[i];
		ptr1[i]=temp;
	}
		printf("\nDIsplay Frist array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nDIsplay second array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ptr1[i]);
	}
	
}