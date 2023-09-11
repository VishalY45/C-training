#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,flag=1;
	for(i=1;i<=10;i++)
		{
		flag=1;
			for(j=1;j<=9;j++)
			{
				if(((i<=5)&&(j>=6-i&&j<=4+i&&flag))||((i>=5)&&(j>=i-5&&j<=15-i&&flag)))
			{
				
					printf("*");
					flag=0;
			}
				else
				{
					printf(" ");
					flag=1;
				}
			}
			
				//else
				//printf(" ")
			printf("\n");
		}
	}
	