#include<stdio.h>
int main()

{
	int i,j,f=1;
	for(i=1;i<=10;i++)
	{
		f=1;
		for(j=1;j<=9;j++)
		{
			if((i<=5&&j>=6-i&&j<=4+i&&f==1)||(i>=6&&j>=i-5&&j<=15-i&&f==1))
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