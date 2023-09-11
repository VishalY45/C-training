#include<stdio.h>
int main()
{
	int size,i,j,max=0;
	printf(" Enter a array size\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int *ptr=a;
	for(i=0;i<size;i++)
	{
		if(*ptr>max)
		{
			max=*ptr;
			ptr++;
		}
	}
	printf("Max:-%d",max);
}