#include<stdio.h>
int main()
{
	int i,j,x,k=1;
	for(i=1;i<=7;i++)
	{  if(i<4)
		x=2+i;
		else
		x=10-i;
		
		for(j=1;j<=4;j++)
		{
		if((i<=4 &&(j<=i))||(i>=4&&(j<=8-i)))
		{
			printf("%d",x);
				
			
		}
		else
		{
			printf(" ");
		}	
		
			
			}printf("\n");
		
		}
	}
			
		              