#include<stdio.h>
int fib,f1=0,f2=1,i=2;
int fibonaci(int num)
{
	if(i<=num)
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		printf("%d ",fib);
		i++;
	
		//	printf("%d **",i);	
//	return printf("fibonaci(num)");
return	fibonaci(num);
		
	}

//	return fibonaci(num);
}
int main()
{
	int num;
	printf("Enter limit ");
	scanf("%d",&num);
//	printf("0");
//	printf("1");
	printf("%d %d ",f1,f2);
int result=fibonaci(num);
printf(" \nResult is %d\n",result);
printf("Number Is %d\n",num);
//	
//	printf("%d",result);  
	return 0;
}