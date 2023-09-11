/*123454321
1234321
12321
121
1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=65;
	for(i=1;i<=5;i++)
	{ count=1;
		for(j=1;j<=9;j++)
		{
			if(j<=(11-i)-i)//j==i  j>=i
			{
				printf("%d",count);
			if	(j<6-i)
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