#include<Stdio.h>
int main()
/*
{
	int no,rem,rev=0,temp,sum=0;
	printf(" ENter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
		
	}
	no=temp;
	if(rev==temp)
	{
		printf(" no is pelindrome");
	}
	else
	{
		printf(" no is not pelindrome");
	}
}
*/

/*
{
	int no,f,i=2;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<no)
	{
		f=0;
		if(no%i==0)
		{
			f=1;
			break;
			
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
/*
{
	int no,f=0,rem;
	printf(" Enter a no");
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
	}
	if(f)
	{
		printf(" no is duck");
		
	}
	else
	{
		printf(" No is not duck");
	}
}
*/
/*
{
	int no,rem,p=1,count=0,temp,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	while(no>0)
	{
		rem=no%10;
		int i=1,p=1;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
		no=no/10;
	}
	no=temp;
	if(sum==temp)
	printf(" no is amstrong");
	else
	printf(" no is not amstrong");
}
*/

/*
{
	int no,i=1,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	while(no!=0)
	{
		int f=1,j=1,rem;
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
*/
/*
{
	int no1,no2,sum1=0,sum2=0,i=1,j=1;
	printf(" Enter two no");
	scanf("%d%d",&no1,&no2);
	while(i<no1)
	{
	   if(no1%i==0)
	   {
	   	sum1=sum1+i;
	   }
	   i++;
	}
	while(j<no2)
	{
		if(no2%j==0)
		{
			sum2=sum2+j;
		}
		j++;
	}
	if(sum1==no2&& sum2==no1)
	{
		printf(" no is amicable");
	}
	else
	{
		printf(" no is not amicable");
	}
}
*/
/*
{
	int no,i,f;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	{
		int j;
		int sum=0;
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0&&i!=0)
		{
			printf("\n%d",i);
		}
	}
	}	
	*/
	
/*	
	{
		int no,i;
		printf(" Enter a no");
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{int sum=0,j;
			sum=0;
			for(j=1;j<=i/2;j++)
			{
				if(i%j==0)
				{
					sum=sum+j;
				}
			}
			if(sum==i)
			{
				printf(" %d",i);
			}
		}
	}
	*/
	
	/*
	{
		int no,i;
		printf(" Enter a no");
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			int k=i,rem,rev=0;
			while(i!=0)
			{
			rem=i%10;
			i=i/10;
			rev=rev*10+rem;	
			}i=k;
			if(rev==i)
			{
				printf("\n%d",i);
			}
		}
	}
	*/
	/*
	{
		int no,i;
		printf(" Enter a no");
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			int k=i,sum=0,rem,j,f;
			while(i!=0)
			{
				rem=i%10;
				f=1,j=1;
				while(j<=rem)
				{
					f=f*j;
					j++;
				}
				sum=sum+f;
				i=i/10;
			}
			i=k;
			if(sum==i)
			{
				printf(" %d\n",i);
			}
		}
	}
	*/
	/*
	{
		int no,i;
		printf(" Enter a no");
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			int k=i,count=0,sum=0;
			while(i!=0)
			{
				count++;
				i=i/10;
			}i=k;
			//printf("%d",count);
			while(i>0)
			{
				int rem,p=1,j=1;
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
			if(sum==i)
			{
				printf("\n%d",i);
			}
		}
	}
*/
