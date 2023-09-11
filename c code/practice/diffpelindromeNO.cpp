#include<stdio.h>
#include<conio.h>
int main()
/*
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%d",count);
				if(j<i)
				{
					count++;
				}
				else
				{
					count--;
				}
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
/*
/*
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{ count=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&& j<=4+i)
			{
				printf("%d",count);
				if(j<5)
				{
				
				count++;
			}else
			{
				count--;
			}
		}
			else
			{
				printf(" ");
			}
				}printf("\n");
			}
		}
		*/
	{
		int i,j,count;
		for(i=1;i<=5;i++)
		{
			count=65;
			for(j=1;j<=9;j++){
				if(i>=j||j<=(2*i)-1)
				{
					printf("%c",count);
				if	(j<i)
					{
						count++;
					}
					else
					{
						count--;
					}
					
				}
				else
				{
					printf(" ");
				}
			}printf("\n");
		}
	}