//WAP to create function name as void findPerfect(int) you have to input number and check number is perfect or not 
#include<stdio.h>
int main()
{
	void findperfect(int);
	int no;
	printf(" Enter a no\n");
	scanf("%d",&no);
	findperfect(no);
}
void findperfect(int x)
{
	int i=1,sum=0;
	while(i<x)
	{
		if(x%i==0)
		sum=sum+i;
		i++;
	}
	printf("sum is%d",sum);
	if(sum==x)
	{
		printf(" No is perfect\n");
	}
	else
	{
		printf(" No is not perfect\n");
	}
}