#include<stdio.h>
#include<math.h>
int count=0,sum=0;
int countT(int no,int temp)
{
	if(no!=0)
	{
		count++;
		no=no/10;
	 countT(no,temp);
	}
	return count;
}
int amstrong(int no,int temp)
{
	if(no!=0)
	{
		int p=0;
		int rem=no%10;
		p=pow(rem,count);
		sum=sum+p;
		no=no/10;
	    amstrong(no,temp);
	}
	if(temp==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int no,temp;
	printf("Enter a no\n");
	scanf("%d",&no);
	temp=no;
	countT(no,temp);
	int result=amstrong(no,temp);
	if(result==1)
	{
		printf(" no is amstrong\n");
	}
	else
	{
		printf("No is not amstrong\n");
	}
}