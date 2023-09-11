#include<stdio.h>
int main()
/*
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=8;j++)
		{
			if(i==1||j==1||j==8||i==9||j==i||j==9-i)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}printf("\n");
	}
}
*/
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i<=5 &&(j>=i)||(i>=6&&j>10-i)))
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