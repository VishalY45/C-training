/*
 35)C program to print following pyramid 
123454321 
1234321 
12321 
121 
1 */
#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j<=(11-i)-i)
			{
				printf("%d",count);
				if(j<=5-i)
				count++;
				else
				count--;
		}
		else
		{
			printf(" ");
		}
	}printf("\n");
	
}}