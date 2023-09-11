#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{count=0;
		for(j=1;j<=10;j++)
		{
			if(j<=i||j>=11-i)
			{
			printf("%d",count);
			/*	if(j<i)
				{printf("1");
				}
				else
				{
					printf("0");
				}*/
				
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}