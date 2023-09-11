#include<Stdio.h>
int checkduck(int no)
{ int f=0;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		if(rem==0)
		{
			f=1;
			break;
		}
		else
		{
			f=0;
		}
	}
	if(f)
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
	printf(" ENter a no");
	scanf("%d",&no);
	int result=checkduck(no);
	if(result==1)
	{
		printf(" no is duck");
	}
	else
	{
		printf(" No is not duck");
	}
}
