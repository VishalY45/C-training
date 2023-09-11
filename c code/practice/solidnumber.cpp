#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=4;i++)
	{ count=1;
		for(j=1;j<=(2*i)-1;j++)
		{
		if((j<=(2*i)-1) && (j==1||j==(2*i)-1))
			{ 	printf(" ");
				printf("*");
			}
			else
			{  printf(" ");
				printf("%d",count);
				if(j<i)
				count++;
				else
				count--;
			}
		}printf("\n");
	}
	for(i=3;i>=1;i--)
	{
		count=1;
		for(j=1;j<=(2*i)-1;j++)
		{
		
		if((j<=(2*i)-1) && (j==1||j==(2*i)-1)){
		
		printf(" ");
		printf("*");
	}
		else{
		
		printf(" ");
		printf("%d",count);
		if(j<i)
		count++;
		else
		count--;
		
	
	}
}printf("\n");
}
}