#include<Stdio.h>
int i=1,no1=7;
int add(int no)
{
	if(no!=6)
	{
	 int rem=no%10;//66%10;
	 no=no/10;//6
	i*=rem;
	 return add(no);	
	}
	
}
int main()
{
	int no;
	printf(" Enter a no\n");
	scanf("%d",&no);
	int result=add(no);
	printf("result %d",result);
	printf(" NUM is %d",no);
}