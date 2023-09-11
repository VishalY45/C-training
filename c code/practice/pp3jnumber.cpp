#include<stdio.h>
#include<conio.h>
int main()
/*
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||i==5||j==0+i)
			{
				printf("%d",j);
			}
			else{
				printf(" ");
			}
		}
		printf(" \n");
	}
}*/

{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||j==6-i)
			{
				printf(" %d",j);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}