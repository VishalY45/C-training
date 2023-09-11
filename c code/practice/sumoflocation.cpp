#include<stdio.h>
int main()
/*
{
	int no,sum=0,sum1=0,count=0,i;
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	for(i=1;i<=count;i++)
	{
		int rem;
		rem=no%10;
		if(i%2!=0)
		{
			sum=sum+rem;
		}
		else
		{
			sum1=sum1+rem;
		}
		no=no/10;
		
	}
	printf("sum is %d",(sum-sum1));
}
*/

{
	int no,i,f=0,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0&&i!=1)
		{
			printf("%d\n",i);
		}
	}
}