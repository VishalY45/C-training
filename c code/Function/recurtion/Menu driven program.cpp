#include<stdio.h>
int rev=0,i=1,sum=0,count=0;
int revv(int no)
{
  if(no!=0)
  {
  	int rem=no%10;
  	no=no/10;
  	rev=rev*10+rem;
  	revv(no);
	  }
	 return rev; 	
}
int duck(int no)
{
	
	if(no!=0)
	{
		int rem=no%10;
		if(rem==0)
		{
			count++;
		}
		no=no/10;
		 duck(no);
	}
	if(count>=1)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	
}
int perfect(int no)
{
	if(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	printf("\n 1) for check rev no\n");
	printf("\n 2) for check duck no\n");
	printf("\n 3) for check perfect no\n");
	int choice;
	printf(" Enter a choice\n");
	scanf("%d",&choice);
	int no;
	printf(" Enter a no\n");
	scanf("%d",&no);
	switch(choice)
	{
		case 1:
		int result=	revv(no);
		printf("%d",result);
			
			break;
			case 2:
				 result=duck(no);
				if(result==1)
				{
					printf(" No is not duck");
				}
				else
				{
					printf("No is not duck");
				}
				
				break;
				
				case 3:
					 result=perfect(no);
					if(result==1)
					{
						printf(" no is perfect\n");
					}
					else
					{
						printf(" no is not perfect");
					}
					break;
					default:
						printf("\n you are enter a wrong choice\n");
						
	}
	
}
	
