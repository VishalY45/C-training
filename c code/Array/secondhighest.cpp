#include<stdio.h>
int main()
{
	int a[5],i,j,nsize=0;
	printf(" Enter a array element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				nsize=a[i];
				a[i]=a[j];
				a[j]=nsize;
			}
		}
	
	}
	printf("decending order\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	
		
	}
		printf("\nsecond highest%d",a[1]);
}