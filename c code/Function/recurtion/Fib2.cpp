#include<stdio.h>
int f1=0,f2=1,fib,i=2,no;
int fibn(int no)
{
	if(no>0)
	{
		
		fib=f1+f2;
		f1=f2;
		f2=fib;
		printf("%d\t",fib);
		i++;
		 fibn(no);
	}
	
}
int main()
{
	int no;
	printf(" enter a no");
	scanf("%d",&no);
	printf("%d\t%d\t",f1,f2);
	fibn(no);
	printf("%d",result);
	
}
