#include<stdio.h>
int main()
{
	int i,j,x,k=1;
	for(i=1;i<=7;i++)
	{ x=1;
		for(j=1;j<=k;j++)
		{
			if(j==1||j==k)
			{
				printf("*");
			}
			else{
				printf("%d",x);
				if(j<i)//(j<=k/2)
				{
					x++;
				}
				else
				{
					x--;
				}
				
			}
			
		}
		printf("\n");
		if(i<4)
		k=k+2;
		else
		k=k-2;
		
	}
}