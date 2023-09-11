#include<stdio.h>
int main()
{
	int no,rem,f=1;
	printf(" Entr a no");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
			if(rem==0)
		{
			f=1;
			break;
		}
	
		else
		{
			f=0;
		}
	}
		if(f)
		{
			printf(" No is duck");
		}
		
		else
		{
			printf(" No is not duck");
		}
		 
	}