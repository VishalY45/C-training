/*
 37)C program to print following pyramid 
A 
ABA 
ABCBA 
ABCDCBA 
ABCDEDCBA
*/
#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%c",ch);
				if(j<i)
				ch++;
				else
				ch--;
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
} 