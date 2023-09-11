#include<stdio.h>
#include<math.h>
int i=1,p=1,count=0,sum=0;
int countt(int no,int temp)
{ 
	if(no!=0)
	{
		count++;
		no/=10;
		countt(no,temp);
	}
	printf("count%d",count);
}
int amstrong(int no,int temp)
{
	if(no!=0)
	{
		int rem=no%10;
		p=pow(rem,count);
		sum=sum+p;
			printf("sum%d",sum);
		no=no/10;
		amstrong(no,temp);
	}


	if(temp==sum)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int no,temp;
	printf(" ENter a no");
	scanf("%d",&no);
	temp=no;
	printf("%d",temp);
	countt(no,temp);
	
	int result=amstrong(no,temp);
	if(result==1)
	printf(" no is amstrong");
	else
	printf(" no is not amstrong");
}