#include<stdio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{ 
	count=0;
		for(j=1;j<=10;j++)
		{
			if((j<=i)||(j>=6&&j<=5+i))
			{
				
				
				
				printf("%d",count);
			
		}
			else{
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