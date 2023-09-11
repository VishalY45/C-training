#include<stdio.h>
int main()
{
	void power(int,int);
	int base,index;
	printf(" ENter a index and base\n");
	scanf("%d%d",&base,&index);
	power(base,index);
}
void power(int x,int y)
{
	int i=1,p=1;
	for(i=1;i<=y;i++)
	{
		p=p*x;
	}
	printf("The Power is:-%d",p);
}