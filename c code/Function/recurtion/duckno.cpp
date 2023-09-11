#include<Stdio.h>
int f=0,count=0;
int checkduck(int no)
{
	if(no!=0)//78948
	{
		int rem=no%10;
		if(rem==0)//0
		{
			count++;
		}
		
		no=no/10;//7894
	  checkduck(no);
	}
	if(count>0)
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
	int result=checkduck(no);
	if(result==1)
	{
		printf(" no is duck");
	}
	else
	{
		printf(" no is not duck");
	}
}