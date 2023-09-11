#include<stdio.h>
int main()
{
	int no,*ptr;
	int rev=0;

	printf("Enter a no\n");
	scanf("%d",&no);
	ptr=&no;
	while(*ptr!=0)
	{
		int rem=*ptr%10;
		*ptr=*ptr/10;
		rev=rev*10+rem;
	}
	printf("Rev:-%d",rev);
}