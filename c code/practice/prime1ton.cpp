#include<stdio.h>
int main()
{
	int no,i,j,f;
	printf("Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
	
	f=0;
	for(j=2;j<=i/2;j++)
	{
	
	if(i%j==0)
	{
		f=1;
		break;
	}
}

	if(f==0 && i!=1)
	{
		printf("\n%d",i);
	}
}
}