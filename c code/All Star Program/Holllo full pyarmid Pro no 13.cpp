#include<stdio.h>
int main()
{
	int i,j,f=1,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if((i<=4&&j==6-i||j==4+i)||(i==5&&f==1))
			{
				printf("%d",count);
				count=i;
				if(i==5)
				count++;
				
				
				f=0;
			}
			else
			{
				printf(" ");
				f=1;
			}
		}
		printf("\n");
	}
}