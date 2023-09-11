#include<stdio.h>
#include<conio.h>
int main()

//hollo full pyaramid


{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(i==6 &&j%2!=0||j==7-i||j==5+i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
		}
	}
		printf("\n");
	
}
}

//  full pyaramid
/*
{
	int i,j,flag=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=7-i&&j<=5+i&&flag)
			{
			
				printf("*");
					flag=0;
			}
			else
			{
				printf(" ");
				flag=1;
			}
		}printf("\n");
	}
}
*/

// 3 inverted full pyaramid
/*
{
	int i,j,flag=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=i&&j<=12-i&&flag)
			
			{
				printf("*");
				flag=0;
			}
			else{
				printf(" ");
				flag=1;
			}
			}
			printf("\n");
			}
		}*/
		
	
			
			
			
			