#include<stdio.h>
int main()
{
	int no,f=0,i,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	{
	 if(no%i==0)
	 {
	 	f=1;
	 	for(j=2;j<=i/2;j++)
	 	{
	 		if(i%j==0)
	 		f=0;
	 		break;
		 }
	 
	 if(f==1)
	 printf("%d\n",i);
}
}
}