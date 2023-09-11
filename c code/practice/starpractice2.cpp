#include<stdio.h>
int main()
{
/*	int i,j,k=7,m=10;
	for(i=4;i>=1;i++)
	{
		for(j=7;j<=k;j--)
		{
			if(j%2==1)
			{
				printf("%d",m);
				m--;
			}
			else
			{
				printf("*");
			}
			
		}
		if(i>3)
			k=k-2;
				}
		printf("\n");
		*/
		
		
		
		int i,j,k=1,count=0;
		for(i=1;i<=8;i++)
		{
			//count=i;
			if(i<=4)
			count++;
			else if(i==5)
			count=4;
			else
			count--;
			for(j=1;j<=k;j++)
			{
			
			if(j%2==1)
			{
				printf("%d",count);
			}
			else
			{
				printf("*");
			}
		}
			if(i<4)
			{
				k=k+2;
			}
			else if(i==4)
			{
				k=7;
			}
			else
			{
				k=k-2;
			}
				printf("\n");
		}
	


}