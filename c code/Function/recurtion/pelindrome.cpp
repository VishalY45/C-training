#include<stdio.h>
int rev=0;
int pelindrome(int no,int temp)
{
	if(no!=0)
	{
		int rem=no%10;
		no=no/10;
		rev=rev*10+rem;
		pelindrome(no,temp);
	}
if(rev==temp)
return 1;
else
return -1;
}
int main()
{
	int no,temp;
	printf(" ENter a no");
	scanf("%d",&no);
	temp=no;
	int result=pelindrome(no,temp);
    if(result==1)
    printf(" no is pelindrome");
    else
    printf(" no is not pelindrome");
}