#include<stdio.h>
int main()
{
	int size,*ptr,i,j;
	printf("Enter a no\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	int *ptr2=&(a[size-1]);
	printf("Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d",*ptr);
		ptr++;
	}
	for(i=-1;i<size;i++)
	{
		printf("a[%d]--->%d\n",i,*ptr--);
	
	}
}