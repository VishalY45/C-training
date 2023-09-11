#include<stdio.h>
int main()
{
	int *ptr,a[5],max=0;
	printf("Enter a array elemnet\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(int i=0;i<5;i++)
	{
		if(*ptr>max)
		{
			max=*ptr;
		}
		ptr++;
	}
	printf("The max is %d",max\);
}