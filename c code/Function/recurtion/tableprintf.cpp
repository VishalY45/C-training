#include<stdio.h>
	int i=1;
int main()
{
	void table(int);
	int no;
	printf(" Enter a no\n");
	scanf("%d",&no);
	table(no);
}
void table(int no)
{

  if(i<=10)
  {
  	printf("%d\n",no*i);
  	i++;
  	table(no);
  }
}