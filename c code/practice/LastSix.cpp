#include<stdio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{count=1;
		for(j=1;j<=10;j++)
		{
			if(j<=i||j>=11-i)
			{
				printf("%d",count);
			/*	if(i<j)
				{
					count++;
					
				}
				else
				{
					count--;
				}*/
			}else
			{
				printf(" ");
			}
			}printf("\n");
		}
	}
