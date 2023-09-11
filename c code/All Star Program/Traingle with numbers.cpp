#include<stdio.h>
int main()

{
	int i,j,f=1,count=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i&&f==1)
			{
				printf("%d",count);
				count++;
				f=0;
			}
			else
			{
				printf(" ");
				f=1;
			}
		}printf("\n");
	}
	}