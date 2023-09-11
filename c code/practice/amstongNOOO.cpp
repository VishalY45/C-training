#include<stdio.h>
#include<math.h>
int main()
{
int no,n;
printf(" enter a no");
scanf("%d",&no);
for(n=1;n<=no;n++)
{
	int count=0,sum=0,temp=n;
	
		while(n!=0)
	{
		count++;
		n=n/10;
		
	}
	//printf(" %d",count);
	

	n=temp;
	while(n>0)
	{
		int rem,p=1,i=1;
		rem=n%10;
			//p=pow(rem,count);
	  	while(i<=count)
		{
			p=p*rem;
		
			i++;
		}
		
		sum=sum+p;
		n=n/10;
	}

	n=temp;
	if(n==sum)
	{
		printf("\n%d",n);
	}
}
		
	
}