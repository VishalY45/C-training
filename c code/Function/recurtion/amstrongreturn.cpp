#include<Stdio.h>
#include<math.h>
int i=1,p=1,sum=0,rem,count=0,temp1,f=1;
int checkamstrong(int no,int temp)
{
	if(no==temp&&f)
	{
		temp1=temp;
		f=0;
	}
	if(no!=0)
	{
		count++;
		no=no/10;
	return checkamstrong(no,temp);
	}
	printf("%d\n",count);
	if(temp!=0)
	{
		rem=temp%10;
		p=pow(rem,count);
		sum=sum+p;
		temp=temp/10;
	return	checkamstrong(no,temp);
	}
	printf("%d\n",sum);
	
	printf("%d",sum);
	if(temp1==sum)
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
	int no;
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	int result=checkamstrong(no,temp);
	if(result==1)
	{
		printf(" no is amstrong");
	}
	else
	{
		printf(" no is not amstrong");
	}
}