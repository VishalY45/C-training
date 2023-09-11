#include<stdio.h>
int main()
{
	int a[10],i,f=0;
	printf(" Enter a values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n display array");
	for(i=0;i<10;i++)
	{
		printf("\na[%d]--->%d",i,a[i]);
	while(a[i]!=0)
	{
	
	int rem;
	rem=i%10;
	
		if(rem==0)
		{
			//printf("\n %d",a[i]);
			f=1;
			break;
		}
		i=i/10;
	}
	}
	if(f==1)
	printf("\n %d is duck no",a[i]);
	else
	printf(" there is no any duck no");
}

