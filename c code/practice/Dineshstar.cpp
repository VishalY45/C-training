#include<stdio.h>
int main()
{
	int i,j,count=1;
	char ch=65;
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=5;j++)
		{
			if(j<=5&&i%2==1)
			{
				printf("%d\t",count);
				count++;
			}
			else if(j<=5&&i%2==0)
			{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}