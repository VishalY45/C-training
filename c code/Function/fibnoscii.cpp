/*WAP to create function name as void
// printFibonacii(int limit): you have to input and print fibonacii series up to limt
*/
#include<stdio.h>
int main()
{
	void fib(int);
	int no;
	printf(" ENter a no\n");
	scanf("%d",&no);
	fib(no);
}
void fib(int x)
{
	int f1=0,f2=1,fib;
	printf("%d\t%d\t",f1,f2);
	
	for(int i=2;i<x;i++)
	{
		fib=f1+f2;
		printf("%d\t",fib);
	    f1=f2;
	    f2=fib;
	}
}

	
