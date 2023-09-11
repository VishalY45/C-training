#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{ count=i;
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||j==6-i)
			{
				printf("%d",count);
		
			}
			else
			{
				printf(" ");
			}
			count++;
			}
			printf("\n");
		}
	}