#include<stdio.h>
int rev=0;
int pelindrome(int no)
{
	if(no!=0)
	{
		int rem=no%10;
		no=no/10;
		rev=rev*10+rem;
		pelindrome(no);
	}
	return rev;
}
int main()
{
	int no;
	printf(" ENter a no");
	scanf("%d",&no);
	int result=pelindrome(no);
    printf("rev:-%d",result);
}