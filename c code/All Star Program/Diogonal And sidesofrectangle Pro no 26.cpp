#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if((i<=5&&(j<=i||j>=11-i))||(i>=6&&(j<=11-i||j>=i)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}