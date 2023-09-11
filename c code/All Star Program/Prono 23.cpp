#include<stdio.h>
int main()
{
		
		int i,j,count=0,k=1,f=1;
		
			for(i=1;i<=8;i++)
			{
				if(i<=4)
				{
					count++;
				}
				else if(i==5)
				{
				
				count=4;
			}
				else
				{
					count--;
				}
				for(j=1;j<=k;j++)
				{
					if(j%2==1)
					printf("%d",count);
					else
					printf("*");
				}
				if(i<4)
				k=k+2;
				else if(i==4)
				k=7;
				else
				k=k-2;
			printf("\n");
	}
		}