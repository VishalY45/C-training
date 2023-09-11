#include<stdio.h>
int main()
{
	int *ptr,a[5],min=a[0];
	printf("Enter a array elemnet\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(int i=0;i<5;i++)
	{
		if(*ptr<min)
		{
			min=*ptr;
		}
		ptr++;
	}
	printf("The min is %d",min);
}