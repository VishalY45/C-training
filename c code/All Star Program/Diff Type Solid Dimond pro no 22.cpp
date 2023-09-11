#include<stdio.h>
int main()
{
	int i,j,count=2;
	{
		for(i=1;i<=7;i++)
		{
			if(i<=4)
			{
				count++;
			}
			else
			{
				count--;
			}
			for(j=1;j<=4;j++)
			{
				if(((i<=4&&j<=i)||(i>=5&&j<=8-i)))
				{
					printf("%d",count);
				
				}
				else
				{
					printf(" ");
				}
			
			}
			printf("\n");
		}
	}}