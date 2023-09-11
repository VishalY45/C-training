#include<stdio.h>
int main()
{
	int amstrong(int);
	int no;
	printf(" ENter a no");
	scanf("%d",&no);
	int result=amstrong(no);
	if(result==1)
	{
		printf(" no is amstrong");
	}
	else
	{
		printf(" no is not amstrong");
	}
}
int amstrong(int no)
{
	int count=0,temp=no,sum=0;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	while(no!=0)
	{
		int i=1,p=1,rem;
		rem=no%10;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
		no=no/10;
	}no=temp;
	if(no==sum)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}