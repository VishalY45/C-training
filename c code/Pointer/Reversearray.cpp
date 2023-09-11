#include<stdio.h>
int main()
{
	int size,i,*ptr,*ptr1;
	printf(" Enter array size\n");
	scanf("%d",&size);
	 int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Before swaping\n");
	for(i=0;i<size;i++)
	{
		printf("ptr[%d]---->%u\n",i,a[i]);	
	}
   ptr=&a[size-1];
	
	    printf(" After reverse\n");
	for(i=0;i<size;i++)	{
		printf("ptr[%d]---->%d\n",i,*ptr--);
		
	}                     
}                                      

