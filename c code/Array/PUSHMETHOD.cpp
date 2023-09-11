#include<stdio.h>
int main()
{
	int a[5],top=-1,value,len,i;
	printf(" Enter a 5 no");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		if(top==len-1)
		{
			printf(" stack is overflow");
		}
		else
	{
	
		top=top+1;
		printf(" ENter avalue");
		scanf("%d",&value);
	
	
			value=top;
		}
		
	}
}