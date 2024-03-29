#include<stdio.h>
void pelindrome(int no)
{
	int temp=no,rev=0;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}
	if(rev==temp)
	{
		printf("No is Pelindrome");
	}
	else
	{
		printf("NO is Not Pelindrome");
	}
};
int main()
{
	pelindrome(545);
}