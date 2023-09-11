#include<stdio.h>
#define min(a,b),((a)<(b)?a:b)
int main()
{
	int a,b;
	printf("Enter a no\n");
	scanf("%d%d",&a,&b);
  printf("%d"min(a,b));	
}