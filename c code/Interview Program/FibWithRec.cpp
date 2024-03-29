#include<stdio.h>
int n1=0,n2=1,i=2,n3;
void fib(int no)
{
	if(i<=no)
	{
	  n3=n1+n2;
	  printf("%d\t",n3);
	  n1=n2;
	  n2=n3;
	  i++;
	  return fib(no);	
	}
};
int main()
{   printf("%d\t%d\t",n1,n2);
	fib(5);
}