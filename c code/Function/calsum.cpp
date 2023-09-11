/*
WAP to create function name as void calSum(int) you have to input number and calculate sum of all natural number up to that number
Example: input  : 5
Output: 1+2+3+4+5=15
*/
#include<stdio.h>
int main()
{
	void calsum(int);
	int no;
	printf(" ENter a no\n");
	scanf("%d",&no);
	calsum(no);
}
void calsum(int x)
{
	int sum=0,i;
	for(i=1;i<=x;i++)
	{
		sum=sum+i;
	}
	printf("Sum is:-%d",sum);
}