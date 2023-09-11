#include<stdio.h>
int main()
{
	int a[10],skey,i,j,f=0;
	printf(" Enter a no");
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter a search key\n");
	scanf("%d",&skey);
	for(i=0;i<10;i++)
	{
	
			if(a[i]==skey)
			{
				++f;
			
			}
}
		if(f>(len/2))
		{
			printf(" mejority element\n");
		}
		else
		{
			printf(" non mejority element");
		}
	
	}
