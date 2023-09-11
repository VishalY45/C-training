#include<stdio.h>
int swap(int *x,int *y)
{
	int z=*x;
	*x=*y;
	*y=z;
	printf("x=%d\ty=%d\n",*x,*y);
}
int main()
{
	int a,b;
	printf(" Enter a no");
	scanf("%d%d",&a,&b);
	printf("\nBefore function calling\n");
	printf("a=%d\tb=%d\n",a,b);
	swap(&a,&b);
		printf("\nAfter function calling\n");
	printf("a=%d\tb=%d\n",a,b);
}