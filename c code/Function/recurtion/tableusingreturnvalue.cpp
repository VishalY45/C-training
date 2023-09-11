//usingreturn
#include<stdio.h>
	int i=1;
int main()
{
	int table(int);
	int no;
	printf(" Enter a no\n");
	scanf("%d",&no);
	int result=table(no);
	printf("\n%d",result);
}
int table(int no)
{

  if(i<=10)
  	{
	
  	i++;
  	return no*i;
  	table(no);
  }
  
}