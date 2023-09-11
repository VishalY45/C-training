#include<stdio.h>
int main()
{
	int i,j,sum=0,no;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
			sum=sum+j;
			}
		}
		
		if(sum==i)
		{
			printf("\n%d",i);
		}
	
		
	}
	}