#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,f=1,n=1;
	for(i=1;i<=4;i++)
	{ 
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i&&f)
			{
			
				printf("%d",n);
				++n;
			f=0;}
			else{
			
				printf(" ");
			f=1;
		}}
			
		printf("\n");
	}
	}
