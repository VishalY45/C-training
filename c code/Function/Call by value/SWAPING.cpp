#include<stdio.h>
int swap(int a,int b)
{
    a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\tb=%d",a,b);
}
int main()
{
	int a,b;
	printf(" Enter a no ");
	scanf("%d%d",&a,&b);
	swap(a,b);
printf("a=%d\tb=%d",a,b);
}