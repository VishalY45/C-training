#include<stdio.h>
int main()
{
	int no,temp,i;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		int k=i,count=0,sum=0;
		while(i!=0)
		{
			count++;
			i=i/10;
		}
		//printf("%d",count);
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
		
		}i=k;
		if(sum==i)
		printf("%d",i);
	}
	
}