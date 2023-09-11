/*C program to print following pyramid:
A
BAB
CBABC
DCBABCD
EDCBABCDE*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=65;
	for(i=1;i<=5;i++)
	{ count=64+i;
		for(j=1;j<=9;j++)
		{
			if(i>=j||j<=(2*i)-1)
			{
				printf("%c",count);
			if	(i<=j)
			count++;
			else
			count--;
				
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}
}