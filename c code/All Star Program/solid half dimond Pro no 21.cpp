#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i<=5&&j<=i)||(i>=6&&j<=10-i))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}