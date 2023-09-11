#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter a array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int size2;
	printf(" ENter a array size\n");
	scanf("%d",&size2);
	int a2[size2];
	printf(" Enter array elemnt");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a2[i]);
	}
	int size3=size+size2;
	int a3[size3];
	for(i=0;i<size;i++)
	{
		a3[i]=a[i];
		}
	for(j=0;j<size2;j++)
	{
		a3[i]=a2[j];
		i++;
	}
	printf(" After a merge\n");
	for(i=0;i<size3;i++)
	{
		printf("%d\t",a3[i]);
	}
}
