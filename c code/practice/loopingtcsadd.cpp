#include<stdio.h>
int main()
{
	int no,count=0,sum1=0,sum2=0,c,temp,i,rem;
	printf(" enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		count++;
		no=no/10;
		}no=temp;
		for(i=1;i<=count;i++)
		{
			rem=no%10;
			if(i%2!=0)
			{
				sum1=sum1+rem;
				}
				else{
					sum2=sum2+rem;
					}
					no=no/10;
					}
					c=sum1-sum2;
					printf("sum=%d",(sum1-sum2));
					}
	
