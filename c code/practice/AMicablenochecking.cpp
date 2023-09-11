#include<stdio.h>
int main()
{
	int n1,n2,sum1=0,sum2=0,i,j;
	printf(" Enter two no");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1/2;i++)
	{
		if(n1%i==0)
		{
		sum1=sum1+i;	
		}
	}
	for(j=1;j<=n2/2;j++)
	{
		if(n2%j==0)
		{
			sum2=sum2+j;
		}
	}
	if(n1==sum2&&sum1==n2)
	{
		printf(" no is amicable");
	}
	else
	{
		printf(" no is not amicable");
	}
}