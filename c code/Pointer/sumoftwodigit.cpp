#include<stdio.h>
int main()
{
	int no1,no2,sum=0;
	printf(" Enter no 1\n");
	scanf("%d",&no1);
	printf(" Enter no 1\n");
	scanf("%d",&no2);
	int *ptr=&no1;
	int *ptr2=&no2;
	sum=*ptr+*ptr2;
	
	printf(" The sum is%d",sum);
}