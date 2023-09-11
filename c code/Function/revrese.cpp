#include<stdio.h>
int main()
{
   void reverse(int);
   int no;
   printf(" Entr a no\n");
   scanf("%d",&no);
   reverse(no);
}
void reverse(int x)
{
	int i=1,rem,rev=0;
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		rev=rev*10+rem;
	}
	printf("%d",rev);
}