#include<stdio.h>
int fact(int no)
{
	int f=1;
	for(int i=1;i<=no;i++)
	{
		f=f*i;
	}
	return f;
};
int main()
{
	printf("ENter no");
	int no;
	scanf("%d",&no);
	int result=fact(no);
	printf("Fact Is %d",result);
}