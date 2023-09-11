#include<stdio.h>
int main()
/*
{
	int no,temp,count=0,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	while(no>0)
	{
		int rem;
		rem=no%10;
		int i=1,p=1;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
		no=no/10;
	}
	if(sum==temp)
	{
		printf(" no is amstrong");
	}
	else
	{
		printf(" no is not amstrong");
	}
}
*/

{
	int no;
	printf(" enter a no");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		int sum=0,count=0,k=i;
		while(i!=0)
		{
			count++;
			i=i/10;
		}
		i=k;
		while(i>0)
		{
			int rem,j=1,p=1;
			rem=i%10;
			while(j<=count)
			{
				p=p*rem;
				j++;
			}
			sum=sum+p;
			i=i/10;
		}
		i=k;
		if(sum==k)
		{
			printf("%d",k);
		}
	}
}
