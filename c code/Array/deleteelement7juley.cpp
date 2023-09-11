#include<stdio.h>
int main()
/*
{
	int a[5],f=0,i,del,j;
	printf(" Enter a value");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter a delete element\n ");
	scanf("%d",&del);
	for(i=0;i<5;i++)
	{
		if(a[i]==del)
		{
			f=1;
			break;
		}
	}
	if(f)
	{
		for( j=i-1;j<5;j++)
		{
			a[i]=a[j+1];
			printf("%d",a[i]);
		}
	}
	for(i=0;i<(5-1);i++)
	{
		printf("\na[%d]----->%d",i,a[i]);
	}
}*/

{
	int a[5],nsize=0,del,i;
	printf(" Enter a value");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter a delete element");
	scanf("%d",&del);
	for(i=0;i<5;i++)
	{
		if(a[i]!=del)
		{
			a[nsize]=a[i];
			nsize++;
		}
	}
	printf(" realsalnt array");
	for(i=0;i<nsize;i++)
	{
		printf("\na[%d]--->%d",i,a[i]);
	}
}