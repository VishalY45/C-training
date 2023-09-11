/*
 34)C program to print following Pyramid: 
1 1 
12 21 
123 321 
1234 4321 
1234554321 */
#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=10;j++)
		{
			if((j<=i)||(j>=6&&j<=5+i))
			{
				printf("%d",count);
				if(j<i)
				count++;
				else if(j==i)
				count=j;
				else
				count--;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
