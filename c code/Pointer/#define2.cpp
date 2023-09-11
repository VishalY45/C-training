#include<stdio.h>
#define max(a,b),((a)<(b))?a:b)
int main()
{
	int a,b;
	printf("enter a no\n");
	scanf("%d%d",&a,&b);
	printf("%d",max(a,b));
}