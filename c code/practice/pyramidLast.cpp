/*C program to print following pyramid
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{ count=65;
		for(j=1;j<=9;j++)
		{
			if(i>=j||j<=(2*i)-1)
			{
				printf("%c",count);
			if	(j<i)
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