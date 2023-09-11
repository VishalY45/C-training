#include<stdio.h>
int main()
{
	int rem,y,d,w,d1;
	printf(" Enter a days");
	scanf("%d",&d);
	y=d/365;
	printf(" \nyear=%d",y);
	
	rem=d%365;
	w=rem/7;
	printf("\n weak=%d",w);
	d1=rem%7;
	printf("\ndays=%d",d1);
	
	
}