#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			//if(j>=5-i&&j<=8-i||j==4-i||j==7-i)
			if(j==5-i||j==8-i||(j>=5-i&&j<=8-i))
			{
				printf("*");
				
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}
}