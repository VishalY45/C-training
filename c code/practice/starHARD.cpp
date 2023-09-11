/*
A
       BAB
     CBABC
  DCBABCD
EDCBABCDE
*/



#include<stdio.h>
int main()
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch=64+i;
		for(j=1;j<=9;j++)
		{
			if(j>=10-((2*i)-1))
			{
				printf("%c",ch);
				if(j<10-i)
				ch--;
				else
				ch++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/
// prime no
/*
{
	int no,i,j;
	printf("enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		int k=i,f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0&&i!=1)
		{
			printf("\n%d",i);
		}
	}
}
*/
/*
{
	int no,i,j;
	printf(" enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		int sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("\n%d",i);
		}
	}
}
*/
// perfect no checking
/*
{
	int i=1,no,sum=0;
	printf("Enter a no");
	scanf("%d",&no);
	while(i<no)
	{
	
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
}
	if(sum==no)
	{
		printf(" No is perfect");
	}
	else
	{
		printf(" No is not perfect");
	}

	}
	*/
	/*
	// prime no checking
	{
		int i=2,no,f=0;
		printf(" Enter a no");
		scanf("%d",&no);
		while(i<no)
		{
		
			if(no%i==0)
			{
				f=1;
				break;
			}
			else
			{
				f=0;
			//	break;
			}
			i++;
		}
		if(f==0&&no!=1)
		{
			printf(" no is prime");
		}
		else
		{
			printf(" no is not prime");
		}
		}	
		*/
		
		
		// amstrong no checking
		/*
		{
			int no,i,j,temp,count=0,sum=0;
			printf(" Entetr a no");
			scanf("%d",&no);
			temp=no;
			while(no!=0)
			{
				count++;
				no=no/10;
				
			}
			no=temp;
			while(no!=0)
			{
				int rem,j=1,p=1;
				rem=no%10;
				while(j<=count)
				{
				p=p*rem;
				j++;	
				}
				sum=sum+p;
				no=no/10;
				
			}
			no=temp;
			if(no==sum)
			printf(" no is amstrong");
			else
			printf(" no is not amstrong");
		}*/
		
		// amstrong no 1 to n
		{
			int i,j,no;
			printf("Enter a no");
			scanf("%d",&no);
			for(i=1;i<=no;i++)
			{
				int count=0,sum=0,k=i;
				while(i!=0)
				{
					count++;
					i=i/10;
				}
			//	printf("%d",count);
				i=k;
				while(i>0)
				{
					int rem,j=1,p=1;
					rem=i%10;
					while(j<=count)
					{
						p=p*rem;
						j++;
					}
					sum=sum+p;
					i=i/10;
				}
				i=k;
				if(i==sum)
				{
					printf("%d",i);
				}
			}
		}
		