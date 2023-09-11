#include<stdio.h>
int main()

{
	int no,i=2,flag;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<no)
	{
	if(no%i==0)
	{
		flag=1;
		break;
		}
		else
		{
			flag=0;
			break;
		}
			i++;
	}
	if(flag==0&&no!=1)
	{
		printf(" no is  prime");
	}
	else
	{
		printf(" No is not prime");
	}
}

/*
{
	int no,i,j,flag;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag++;
				break;
		
		}
	}
		if(flag==0&&i!=1)
		printf("%d",i);
	
}}*/