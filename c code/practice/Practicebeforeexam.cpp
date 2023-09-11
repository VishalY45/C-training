#include<stdio.h>
int main()
/*
{
	int i,j,count=0,k=1;
	for(i=1;i<=7;i++)
	{
		count=1;
		for(j=1;j<=k;j++)
		{
			if(j==1||j==k)
			{
				printf("*");
			}
			else
			{
				printf("%d\t",count);
				if(j<i)
				{
					count++;
				}
				else
				{
					count--;
				}
			}
		}
		if(i<4)
		k=k+2;
		else
		k=k-2;
		printf("\n");
	}
}*/
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{
		count=0;
		for(j=1;j<=10;j++)
		{
			if(j<=i||(j>=6&&j<=5+i))
			{
				printf("%d",count);
			}
			else
			{
				printf(" ");
			}
			if((j<=4&&j%2==1)||(j>=6&& j%2==0))
	{
	
	count=1;
}
else
{
	count=0;
}
		}
		printf("\n");
	}
}