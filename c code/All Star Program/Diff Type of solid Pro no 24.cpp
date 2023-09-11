#include<stdio.h>
int main()
{
	int i,j,count=0,k=1;
	for(i=1;i<=7;i++)
	{
		count=1;
		for(j=1;j<=k;j++)
		{	
		 if(j==1||j==k)
		 {
		 	printf("*");
		 }
		 else
		 {
		 	printf("%d",count);
		 	if(j<i)
		 	count++;
		 	else
		 	count--;    
		 }
		}
		printf("\n");
		if(i<4)
		{
			k=k+2;
			
		}
		else
		{
			k=k-2;
		}
	}
}