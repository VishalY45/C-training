#include<stdio.h>
int main()
{
	int no1,no2,i=1,sum=0,sum1=0;
	printf(" Enter two no");
	scanf("%d%d",&no1,&no2);
	while(i<no1)
	{
		if(no1%i==0)
		{
			sum=sum+i;
		}
		i++;
		
	}
	while(i<=no2)
	{
		if(no2%i==0)
		{
			sum1=sum1+i;
		}
		i++;
	}
	if(sum==no2&&sum1==no2)
	{
		printf(" no is anicable");
	}
	else
	{
		printf(" no is not anicable");
	}
}