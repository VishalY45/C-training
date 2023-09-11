#include<stdio.h>
int f=1,i=1;
int fact(int no)
{
  if(i<=no)
  {
  	f=f*i;
  	i++;
  	return fact(no);
 }	
	  else
	  {
	  	return f;
	  }
}
int main()
{
	int no;
	printf(" ENter a no");
	scanf("%d",&no);
	int result=fact(no);
	printf(" Fact is %d",result);
	return 0;
}