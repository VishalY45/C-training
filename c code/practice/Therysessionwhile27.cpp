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
	