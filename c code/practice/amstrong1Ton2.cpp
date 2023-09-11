#include<stdio.h>
#include<math.h>
int main()
{
	int no,count=0,r,p=0,temp,sum=0;
	printf("Enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		no=no/10;
		count++;
		
	}
	no=temp;
	while(no!=0){
		r=no%10;
		no=no/10;
	//	p=p+(r*r*r*4);
	p=pow(r,count);
	sum=sum+p;
	}
	if(sum==temp)
	{
		printf(" no is amstrong");
		
	}
	else
	{
		printf(" No is not amstrong");
	}
}
