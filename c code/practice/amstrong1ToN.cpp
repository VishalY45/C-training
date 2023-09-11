#include<stdio.h>
int main()
{
	int count=0,no;
	printf("Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		count++;
		no=no/10;
		
	}
	printf(" %d",count);
	}