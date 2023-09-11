#include<stdio.h>
int main()
{
	int size,i,size2,count=0;
	printf(" Enter a array size one\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter a arry elemnt\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter a array size second\n");
	scanf("%d",&size2);
	int a2[size2];
	printf(" Enter second array element\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a2[i]);
	}
	count=0;
	int siz3=size+size2;
	int a3[siz3];
	for(i=0;i<size;i++)
	{
		a3[i]=a[i];
	}
	for(int j=0;j<size2;j++)
	{
		a3[i]=a2[j];
		i++;
	}
	printf("i=%d",i);
	i=i-siz3;
		printf("i=%d",i);
	for(i=0;i<siz3;i++)
	{
		printf("%d\t",a3[i]);
	}

}