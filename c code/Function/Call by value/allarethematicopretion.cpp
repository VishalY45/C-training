// Wap to perfrom all arethmatic opretion in call by value
#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int subtraction(int x,int y)
{
	return x-y;
}
int multi(int x,int y)
{
	return x*y;
}
int division(int x,int y)
{
	return x/y;
}
int main()
{   int temp(int,int);
	int x,y;
	printf(" Enter a no");
	scanf("%d%d",&x,&y);
	    int sum=add(x,y);
	printf("Sum:-%d\n",sum);
		int sub=subtraction(x,y);
	printf("Sub:-%d\n",sub);
		int mul=multi(x,y);
	printf("MUl:-%d\n",mul);
		int div=division(x,y);
	printf("Division:-%d\n",div);
	printf("x=%d\ty=%d",x,y);
}
