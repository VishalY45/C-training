#include<stdio.h>
int main()
{
		int i,j,count=1,f=1;
		for(i=1;i<=5;i++)
		{
			count=1;
			for(j=1;j<=9;j++)
			{
				if(j==6-i||(i==5&&f==1))
				{
					printf("%d",count);
					
					f=0;
				 if(i==5);
					{
						count++;
					}
				}
				else if(j==4+i)
				{
					count=i;
					printf("%d",count);
				}
				else
				{
					printf(" ");
					f=1;
				}
			}printf("\n");
		}
	}
	