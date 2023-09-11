#include<stdio.h>
int swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	printf("a=%d\t b=%d",a,b);
}
int main()
{
	int x,y;
	printf(" Enter a no\n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("x=%d\ty=%d",x,y);
}