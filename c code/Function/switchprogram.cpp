#include<stdio.h>
int main()
{
	void pelindrome(int);
	void duck(int);
	void amstrong(int);
	void strong(int);
	
	int choice,x;
	printf(" 1:for pelindrome\n");
	printf(" 2:for a duck\n");
	printf(" 3:for a amstrong\n");
	printf(" 4:for a strong\n");
	printf(" ENter a choice");
	scanf("%d",&choice);
	printf("Enter a no");
	scanf("%d",&x);
	switch(choice)
	{
		case 1:
			pelindrome(x);
	     	break;
			case 2:
				duck(x);
			
			break;
			case 3:
			amstrong(x);
			break;
			case 4:
				strong(x);
					
            	break;
            	default:
            		printf(" Wrong choice\n");
            	}
			
}
void pelindrome(int no)
{
		int rev=0,rem;
			int temp=no;
			while(no!=0)
			{
				rem=no%10;
				no=no/10;
				rev=rev*10+rem;
			}no=temp;
			if(no==rev)
			{
				printf(" no is pekindrome\n");
			}
			else
			{
				printf(" no is not pelindrome\n");
			}
}
void duck(int no)
{
		
				int f=0,i=1,rem;
				
			while(no!=0)
			{
				rem=no%10;
				if(rem==0)
				{
					f=1;
					break;
				}
				no=no/10;
			}
			if(f==1)
			{
				printf(" no is duck");
			}
			else
			{
				printf(" no is not duck");
			}
}
void amstrong(int no)
{
		int rem,count=0,sum=0;
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
void strong(int no)
{
	int f,i=1,sum=0,rem;
	
                    	
	                      int temp=no;
	                 while(no)
	              {
	                 	int j=1,f=1;
		                  rem=no%10;
	                 	while(j<=rem)
	           	{
		                	f=f*j;
		                	j++;
	            	}
		           sum=sum+f;
		              no=no/10; 
	           }
	            no=temp;
                  	if(sum==no)
	           {
		            printf(" no is strong");
		
	           }
               	else
        	{
	          	printf(" no is not strong");
            	}
}
