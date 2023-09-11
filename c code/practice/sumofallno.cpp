#include<stdio.h>
int main()
{
	/*
	int no,rem,k,sum=0;
	printf("Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
	rem=no%10;
	no=no/10;
	sum=sum+rem;	
	}
	printf("sum is %d",sum);
}
*/
/*
int i;
for(i=0;i<=255;i++)
{
	printf(" \nAscii value for %c = %d",i,i);
	

}}
*/

int no,i,j,prime;
printf(" enter a no");
scanf("%d",&no);
for(i=2;i<=no;i++)
{
	
	if(no%i==0)
	prime=1;
	for(j=2;j<=i/2;j++)
	{
	if(i%j==0)
	{
		prime=0;
		break;
	}
}
	if(prime==1)
	{
		printf("\n%d",i);
		}	
	}
}