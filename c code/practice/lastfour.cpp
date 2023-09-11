/*C program to print character pyramid as given below:
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count='A';
	for(i=1;i<=5;i++)
	{ //count=64;
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf("%c",count);
				count++;
			/*if	(i<=j)
			count++;
			else
			count--;*/
				
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}
}