#include<stdio.h>
int main()
{
	int no,n,k,j,rem;
	long int sum,fact;
	printf(" Enter a no");
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
			printf("\n%d",n);
		}
	}
}