#include<stdio.h>
int main()
{
	int a[5],i;
	printf(" Enter a values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Duplicate value");
	for(i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				printf("\n%d",a[j]);
			}
		}
	}
}