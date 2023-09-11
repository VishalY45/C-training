#include<stdio.h>
int main()
{
	int size,i,j;
	printf(" ENter a array size\n");
	scanf("%d",&size);
	int a[size];
	int *ptr=a;
	printf(" Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int size2;
	printf(" Enter a array size\n");
	scanf("%d",&size2);
	int a2[size2];
	int *ptr2=a2;
	printf(" Enter array elemnt\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a2[i]);
	}
	int size3=size+size2;
	int a3[size3];
	int *ptr3=a3;
	for(i=0;i<size;i++)
	{
		*ptr3=*ptr;
		ptr3++;
		ptr++;
	}
	for(i=0;i<size2;i++)
	{
		*ptr3=*ptr2;
		ptr3++;
		ptr2++;	
	}
	ptr3=ptr3-size3;
    printf(" After A Merge\n");
	for(i=0;i<size3;i++)
	{
		printf("%d\t",*ptr3);
		ptr3++;
	}
}