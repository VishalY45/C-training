#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,p,p1,no,count=0,temp,ld,fd;
	printf(" Enter a no");
	scanf("%d",&no);
	temp=no;
	printf(" \n before swaping no :-%d",no);
    while(no!=0)
    {
    	count++;
    	no=no/10;
	}
	no=temp;
	ld=no%10;
	p=pow(10,--count);
	fd=no/p;
	no=no/10;
	p1=pow(10,--count);
    no=no%p1;
	no=ld*p+no*10+fd;
	printf("\n After swaping no :- %d",no);
}
	
	
	
