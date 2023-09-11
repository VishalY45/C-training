#include<stdio.h>
int main()
{
	long int n,swap;
	int m=1,first,last,count=0,i=1,temp;
		printf("Enter any digit number");
		scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		n=n/10;
		count++;
		
	}
	printf("%d",count);
	while(i<count)
	{
		
		m=m*10;
		i++;
		
	}printf("\nm=%d",m);
	n=temp;
	last=n%10; //4
	n=n/10; //123
	printf("\nlast=%d\tn=%d",last,n);
	int mid;
	mid=n%(m/10);
	first=n/(m/10);
	printf("\n mid=%d\t first=%d",mid,first);
	swap=last*m+mid*10+first;
	printf("\n after swaping=%d",swap);
	
}