#include<stdio.h>
#include<math.h>
int main()
/*
{
	int no,sum=0,temp;
	printf("Enter a no");
	scanf("%d",&no);
//	no=temp;
temp=no;
	while(no)
	{
		int i=1,f=1,rem;
		rem=no%10;
		while(i<=rem)
		{
			f=f*i;
			i++;
		}
		sum=sum+f;
		no=no/10;
	}
	if(sum==temp)
	printf(" No is amstrong");
	else
	printf(" No is Not amstrong");
}
  */
  /*
  {
  	int no,n,k,j,rem;
  	long int fact,sum;
  	printf("Enter a no");
  	scanf("%d",&no);
  	for(n=1;n<=no;n++)
  	{
  		k=n;
  		sum=0;
  		while(k>0)
  		{
  			
  			fact=1;
  			
  			rem=k%10;
  			for(j=1;j<=rem;j++)
  			{
  				fact=fact*j;
  				
			  }
  			sum=sum+fact;
  			k=k/10;
	}
	  if(sum==n)
	  {
	  	printf("\n%ld",n);
	  }
}
		 }  
		 */
		 
		 /*
		 {
		 	int no,temp,rem,p,sum=0,i;
		 	printf(" Enter a no");
		 	scanf(" %d",&no);
		 	temp=no;
		 	for(i=1;i<=no;i++)
		 	{
		 		int k=i,count=0,sum=0;
		 		while(i!=0)
		 		{
				 
		 		count++;
		 		i=i/10;
			 }
			 i=k;
			 while(i>0)
			 {
			 	int j=1,p=1;
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
			 	printf("  %d",i);
			 }
			
			  }
		}*/
		
		
{
	int no;
	printf(" Enter a no");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		int sum=0,k=i;
		while(i>0)
		{
			int rem,f=1,j=1;
			rem=i%10;
			while(j<=rem)
			{
				f=f*j;
				j++;
			}
			sum=sum+f;
			i=i/10;
		}
		i=k;
		if(sum==k)
		{
			printf("\n%d",k);
		}
		
	}
}