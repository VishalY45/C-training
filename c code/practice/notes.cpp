#include<stdio.h>
int main()
{
	int f,t,o,fn,twe,ten,n,rem,one;
	printf(" Enter Total money");
	scanf("%d",&n);
	f=n/500;
	printf(" \n500=%d",f);
	rem=n%500;
	t=rem/200;
	int temp=rem%200;
	printf("\n200=%d",t);
	o=temp/100;
	temp=temp%100;
	printf("\n100=%d",o);
	fn=temp/50;
	temp=temp%50;
	printf("\n50=%d",fn);
	twe=temp/20;
	temp=temp%20;
	printf("\n20=%d",twe);
    ten=temp/10;
    temp=temp%10;
	printf("\n10=%d",ten);
	 one=temp/1;
	printf("\n1=%d",one);
		
}