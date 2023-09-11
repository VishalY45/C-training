#include<stdio.h>
int main()
{
	int size,i,j,*ptr,*ptr2,*ptr3,size2,size3;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf(" Entr seocond array size\n");
	scanf("%d",&size2);
	int b[size2];
	 ptr2=b;
	printf(" Enter array element\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&ptr2[i]);
	}
	size3=size+size2;
	int c[size3];
	 ptr3=c;
	for(i=0;i<size;i++)
	{
		*ptr3=*ptr;
		ptr++;
		ptr3++;
	}
	for(j=0;j<size2;j++)
	{
		*ptr3=*ptr2;
		ptr2++;
		ptr3++;
	}
	ptr3=ptr3-size3;
	for(i=0;i<size3;i++)
	{
		printf("%d\t",*ptr3);
		ptr3++;
	}
}