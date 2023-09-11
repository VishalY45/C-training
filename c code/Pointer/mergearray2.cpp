#include<Stdio.h>
int main()
{
	int size,size2,i,j,*ptr,*ptr2,*ptr3;
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
	ptr=a;
	ptr2=a2;
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
	ptr3=a3;

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
	//ptr3=ptr3-size3;
	printf("\n Result array\n");
for(i=0;i<size3;i++)
{
	printf("%d\t",a3[i]);
//q	ptr3++;
}
}