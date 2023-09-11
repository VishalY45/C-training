#include<stdio.h>
int main()
{
	//int *ptr,*ptr1;
	int no1,no2;
	printf(" Enter two no");
	scanf("%d",&no1);
	printf(" Enter two no");
	scanf("%d",&no2);
int	*ptr=&no1;
int	*ptr1=&no2;
	*ptr=*ptr+*ptr1;
	*ptr1=*ptr-*ptr1;
	*ptr=*ptr-*ptr1;
	printf(" After swaping%d%d",*ptr,*ptr1);
	
	
	
	
}