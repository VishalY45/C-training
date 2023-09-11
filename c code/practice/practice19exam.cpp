#include<stdio.h>
#include<math.h>
int main()
//prime 1 to n
/*
{
	int i,no,f=1,j,sum=0;
	printf(" enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f++;
				break;
			}
				
		
		}
		if(f==0 && i!=1)
		{
		
		printf("\n%d",i);
		sum=sum+i;
	}
	
	
	}
	printf("\n sum is=%d",sum);
}*/

// amstrong no check
/*
{
	int no,temp,i,count=0,p=1,sum=0;
	printf(" Enter a no");
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
		int rem=no%10;
		no=no/10;
		p=pow(rem,count);
		sum=sum+p;
		
		
	}
	if(temp==sum)
	{
		printf(" no is amstrong");
	}
	else
	{
		printf(" no is not amstrong");
	}
	}
*/



// amstrong 1 t0 n
/*

{
	int no,i;
	printf(" Enter a no");
	scanf("%d",&no);
//	int temp=no;
	for(i=1;i<=no;i++)
	{
	  int temp=i,count=0,sum=0;
	while(i!=0)
	{
		count++;
		i=i/10;
		
	}
	i=temp;
	while(i>0)
	{
		int rem,n=1,p=1;
		rem=i%10;
		p=pow(rem,count);
		*/
		
	/*while(i<=count)
	{
		sum=sum+p;
	}*/
//	printf("%d",sum);
/*sum=sum+p;
	i=i/10;
	}
	i=temp;
	if(i==sum)
{
	printf("%d",i);
	
}
	
}

}
*/
///



/// perfect no
/*
{
	int no,i=1,sum=0;
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
			printf("no is perfect");
		}
		else
		{
			printf("no is not perfect");
		}
	}
	*/
	
	
	
	// fib
	{
		int i=1,no,f1=0,f2=1,fib;
		printf("Enter a no");
		scanf("%d",&no);
		printf("\t %d\t%d\t",f1,f2);
		while(i<no)
		{
			fib=f1+f2;
			f1=f2;
			f2=fib;
			i++;
			
		}
			printf("fib %d",fib); 
	
	}
	

