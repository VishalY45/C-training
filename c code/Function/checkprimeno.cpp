//WAP to create function name as void checkPrime(int): you have to input number and check number 
// is prime or not using a function 
#include<stdio.h>
int main()
{
	void checkprime(int);
	int no;
	printf(" ENter a no\n");
	scanf("%d",&no);
	checkprime(no);
}
void checkprime(int x)
{
	int i=2,f=0;
	for(i=2;i<x;i++)
	{
		f=0;
		if(x%i==0)
		{
			f=1;
			break;
		}
		
	}
	if(f==0&x!=1)
	{
		printf(" no is prime\n");
	}
	else
	printf("no is not prime");
}