/*C program to print following character pyramid:
ABCDEDCBA
ABCD DCBA
ABC CBA
AB BA
A A*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{ count=65;
		for(j=1;j<=9;j++)
		{
			if(j<=6-i||j>=4+i)
			{
				printf("%c",count);
			if	(j<5)
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