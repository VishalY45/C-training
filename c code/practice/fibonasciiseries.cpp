#include<stdio.h>
int main()
{
	int fib,f1=0,f2=1,no,i;
	printf(" Enter a no");
	scanf("%d",&no);
	printf("%d \n %d",f1,f2);
	for(i=3;i<=no;i++)
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		
		
	}
printf("\n%d",fib);
	
}