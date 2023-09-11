#include<stdio.h>
int i=1,sum=0;
int checkperfect(int no)
{
	if(i<no)
	{
		if(no%i==0)
		{
		   sum=sum+i;
		}
		     i++;
		   checkperfect(no);
	}
		if(no==sum)
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
	printf(" ENter a no\n");
	scanf("%d",&no);
	int result=checkperfect(no);
	if(result==1)
		{
			printf(" No is perfect");
		}
		else
		{
			printf("no is not perfect");
		}
}