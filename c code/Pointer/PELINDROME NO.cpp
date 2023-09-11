#include<stdio.h>
int main()
{
	int no,*ptr,*ptr2;
	int rev=0;

	printf("Enter a no\n");
	scanf("%d",&no);
	ptr=&no;
	int temp=no;
	ptr2=&temp;
	while(*ptr!=0)
	{
		int rem=*ptr%10;
		*ptr=*ptr/10;
		rev=rev*10+rem;
	}
	if(*ptr2==rev)
	printf("No is pelindrome");
	else
	printf("No is not pelindrome");
	
}