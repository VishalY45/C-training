/*
a
A b
a B c
A b C d
a B c D e
*/
#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		if(i%2==1)
		ch='a';
		else
		ch='A';
		for(j=1;j<=5;j++)
		{
			if(j<=i&&(i+j)%2==0)
			{
				printf("%c",ch);
				ch=ch-32;
				ch++;
			}
		
			else if(j<=i&&(i+j)%2==1)
			{
				printf("%c",ch);
				ch=ch+32;
				ch++;
			}
		}
		printf("\n");
	}
}