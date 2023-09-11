#include<stdio.h>
#include<conio.h>
int main()

{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{ 
	count=1;
		for(j=1;j<=9;j++)
		{
			if(i==5 && j%2!=0||j==6-i||j==4+i)
			{
				printf("%d",i);
				if(i==5&&j<4)
				{
					count=1;
				}else
				{
					count--;
				}
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	
	