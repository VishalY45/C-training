#include<stdio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=10;j++)
		{
		
		
		
		
			if((j<=i)||(j>=6&&j<=5+i))
			{
			
			printf("%d",count);
			}	
			else
			{
				printf(" ");
			}
			if(j<i)
			{
				count++;
			}
			else if(j>=6)
			{
				count--;
			}
			
	}
	printf("\n");

}
	return 0;
}