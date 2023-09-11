/*
. WAP to input number and check number is perfect or not using recursion 
you have to design function name as int checkPerfect(int) : this function can calculate perfect number 
and return 1 if number is perfect and return -1 when number is not perfect
*/
#include<stdio.h>
int flag=0,i=1,sum=0;
int checkperfect(int no)
{
	if(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
			i++;
			 checkperfect(no);
		}
		
		if(sum==no)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}
int main()
{
	int no;
	printf(" ENter a no\n");
	scanf("%d",&no);
	int result=checkperfect(no);
	if(result==1)
	{
		printf(" no is perfect\n");
	}
	else
	{
		printf(" no is not perfect");
	}
}
