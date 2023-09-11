/*C program to print following Pyramid: 
0 0 
01 01 
010 010 
0101 0101 
0101001010 
*/
#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{count=0;
		for(j=1;j<=10;j++)
		{ 
			if((j<=i||(j>=6&&j<=5+i)))
			{
				printf("%d",count);
			}
			else
			{
				printf(" ");
			}
			if((j<=4&&j%2==1)||(j>=6&& j%2==0))
	{
	
	count=1;
}
else
{
	count=0;
}
		}
		printf("\n");
	}
}