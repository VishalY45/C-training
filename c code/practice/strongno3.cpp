#include<stdio.h>
int main()
{
	int no,f,i=1,sum=0,rem;
	
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	while(no)
	{
		int j=1,f=1;
		rem=no%10;
		while(j<=rem)
		{
			f=f*j;
			j++;
		}
		sum=sum+f;
		no=no/10;
	}
	no=temp;
	if(sum==no)
	{
		printf(" no is strong");
		
	}
	else
	{
		printf(" no is not strong");
	}
}