#include<stdio.h>
int main()
{
	void duck(int);
	int no;
	printf(" ENter a no\n");
	scanf("%d",&no);
	duck(no);
	
}
void duck(int no)
{
	int rem,f=0;
	while(no!=0)
	{rem=no%10;
		if(rem==0)
		{
			f=1;
			break;
		}
		no=no/10;
	}
	if(f==1)
	{
		printf("\n No is duck");
	}
	else
	{
		printf(" no is not duck");
	}
}