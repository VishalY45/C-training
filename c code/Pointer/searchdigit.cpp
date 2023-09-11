#include<stdio.h>
int main()
{
	int *ptr ,size,i,skey,f=0;
	printf(" Enter array size\n");
	scanf("%d",&size);
	int a[size];

	printf(" Enter array elelment\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
		ptr=a;
	printf("\nEnter search digit\n");
	scanf("%d",&skey);
	for(i=0;i<size;i++)
	{
		if(*ptr==skey)
		{
			f=1;
			break;
		}
		ptr++;
	}
	if(f)
	{
		printf("The value is found %d",skey);
	}
	else
	{
		printf("The value of %d is not found",skey);
	}
}