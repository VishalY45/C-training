#include<stdio.h>
int main()
{
	int base,index,p=1,i=1;
	printf(" Enter a base and index");
	scanf("%d%d",&base,&index);
	while(i<=index)
	{
		p=p*base;
	 i++;
	}
	printf("power is =%d",p);
}