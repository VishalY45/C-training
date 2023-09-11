#include<Stdio.h>
int main()
{
	int size,size2,i,j;
	printf(" ENter size\n");
	scanf("%d",&size);
	int a[size];
	printf(" ENter a size\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter second array size\n");
	scanf("%d",&size2);
	int a2[size2];
	printf(" Enter a seond array\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a2[i]);
	}
	printf("\n Display array 1\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n Display arry 2\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a2[i]);
	}
	int size3=size+size2;
	int a3[size3];
	j=0;
	for(i=0;i<size;i++)
	{
		a3[i]=a[i];
	}
	for(j=0;j<size2;j++)
	{
		a3[i]=a2[j];
		i++;
	}
	printf("\n Result array\n");
for(i=0;i<size3;i++)
{
	printf("%d\t",a3[i]);
}
}