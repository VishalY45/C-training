#include<stdio.h>
int main()
{
	int i,j,f=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j==7-i||j==5+i||(i==6&&f==1))
			{
			
			printf("*");
			f=0;
			
		
		}
		else
		{
			printf(" ");
			f=1;
			
		}
		}
			printf("\n");
	}
}