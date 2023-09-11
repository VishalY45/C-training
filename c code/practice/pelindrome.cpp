#include<stdio.h>
int main()
{  

	int no,temp,count=0,rem,rev=0;
	printf("Enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		no=no/10;
		count++;
	}
	printf("The total no of count=%d\n",count);
	
	no=temp;
	while(no!=0)
	{
		rem=no%10;//123
		no=no/10;
	    rev=rev*10+rem;
	}
	
	if(temp==rev)
	{
		printf("no is pelindrome");
		
	}
	else
	{
		printf("no is not pelindrome");
	}

}

