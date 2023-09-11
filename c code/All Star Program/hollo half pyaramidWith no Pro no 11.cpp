#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1||j==1||j==i||i==5)
		  printf("%d",j);
		  else
		  printf(" ");	
		}
		printf("\n");
	}
}