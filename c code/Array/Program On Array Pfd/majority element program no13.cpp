#include<stdio.h>
int main()
{
	int a[10],i,j,count=0,skey;
	printf(" Enter a arry element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" dispaly array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" \nEnter a no");
	scanf("%d",&skey);
	for(i=0;i<10;i++)
	{
		if(a[i]==skey)
			{
				count++;
			
		}
	}
	if(count>4)
	{
		printf(" The no is majority element");
	}
	else
	{
		printf(" The given no id not majority element");
		}
	}
}