/*C program to print following character pyramid: 
ABCDEDCBA 
ABCD DCBA 
ABC CBA 
AB BA 
A A*/
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
			if((j<=6-i||(j>=6&&j<=11-i)))
			{
				printf("%c",ch); 
				if(j<=5-i)
				ch++;
			
				else if(j>=5)
				ch--;
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	
	}}