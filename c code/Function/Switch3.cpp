#include<stdio.h>
void amstrong(int no)
{int rem,count=0,sum=0;
			int temp=no;
			while(no!=0)
			{
				count++;
				no=no/10;
			}no=temp;
			while(no!=0)
			{
				int i=1,p=1;
				rem=no%10;
				while(i<=count)
				{
					p=p*rem;
					i++;
				}
				sum=sum+p;
				no=no/10;
			}no=temp;
			if(no==sum)
			{
				printf(" no is amstrong\n");
			}
			else
			{
				printf(" no is not amstrong\n");
			}
}
void pelindrome(int no)
{
	int rem,rev=0,temp=no;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}
	if(temp==rev)
	{
		printf(" no is pelindrome");
	}
	else
	{
		printf(" no is not pelindrome");
	}
}
void countt(int no)
{
	int count=0;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	printf("\n count is %d\n",count);
}
int main()
{   
    printf("\n 1:for amstrong\n");
    printf("\n 2:for pelindrome\n");
    printf("\n 3:for count\n");
	int choice;
	printf("\nEntera choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			int no;
			printf(" Enter a no\n");
			scanf("%d",&no);
			amstrong(no);
			break;
			case 2:
					
			       printf(" Enter a no\n");
			        scanf("%d",&no);
		           	pelindrome(no);
		           	break;
		           	case 3:
		           	
		           		printf(" enter a no\n");
		           		scanf("%d",&no);
		           		countt(no);
		           		break;
		           		default:
		           			printf(" Enter a Wrong choice\n");
				
			
	}
	
}
