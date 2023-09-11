/*C program to print character pyramid as given below: 
A 
26 | P a g e
B C 
D E F 
G H I J 
K L M N O */
#include<stdio.h>
int main()
{
	int i,j;
	char ch=66;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i+1)
			{
				printf("%c",ch);
				ch++;
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}
}