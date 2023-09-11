#include<stdio.h>
int main()
{
	int amstrong(int);
	int no;
	printf(" ENter a no\n");
	scanf("%d",&no);
	int result=amstrong(no);
	if(result==0)
	{
		printf(" no is not amstrong\n");
	}
	else
	{
		printf(" no is amstrong");
	}
}
int amstrong(int no)
{
	int temp=no,count=0,sum=0;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	while(no!=0)
	{
		int rem,p=1,i=1;
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
	return 1;
	else
	return 0;
}