#include<stdio.h>
int main()
/*
{
	int no,i=1,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
		
	}
	if(sum==no)
	printf(" No is perfect");
	else
	printf("no is not perfecct");
}
*/
{
	int no,i,sum=0,j;
	printf("Enter a no");
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
		printf(" %d",i);
		
	}
}
}
