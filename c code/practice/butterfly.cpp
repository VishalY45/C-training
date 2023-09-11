#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=10;i++)
	{ //count=65;
		for(j=1;j<=10;j++)
		{
			if((i<=5&&(j<=0+i||j>=11-i))||(i>=6&&(j<=11-i||j>=0+i)))
			{
				printf("*");
		/*	if	(j<5)
			count++;
			else
			count--;
			*/
				
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}
}