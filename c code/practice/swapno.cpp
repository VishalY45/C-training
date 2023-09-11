#include<stdio.h>
int main()
{
	int fd,ld,n,temp=0;
	printf("Enter a no");
	scanf("%d",&n);
	ld=n%10;
	while(n!=0)
	{
		fd=n/10;
		n=n/10;
	}
	n=fd;
	fd=ld;
	ld=fd;
	printf(" %d%d%d",ld,n,fd);
	
}
/*
#include<stdio.h>
int main()
{
	int fd,c,b,a,ld,n,n1;
	printf("Enter a no");
	scanf("%d%d",&a,&b);
	if(n!=0)
	   c=a;
	   a=b;
	   b=c;
	printf(" %d%d",a,b);
	
}*/