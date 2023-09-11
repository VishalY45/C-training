#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,flag=2;
	for(i=1;i<=7;i++)
		{
			flag++;
		//count=1;
			for(j=1;j<=4;j++)
			{
				if((i>=j&&i<=4)||(j<=8-i&&i>=5))
				{
				   
					printf("%d",flag);
				/*if(j<i)
					flag--;
					else
					flag++;
					*/
				
				}
			
		
				else
				{
				
				printf(" ");
			}}
			printf("\n");
		}
	}
	
	
	
	/*
		int i,j;
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=7;j++)
			{
				if((i<=4&&(j<=(2*i)-1))||(i>=5&&(j<=(13-i)-1)))
				{
					printf("%d",i);
				}
			}printf("\n");
		}
	}
	*/