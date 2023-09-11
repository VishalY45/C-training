#include<stdio.h>
int main()
{
	int a[5],i,mid,skey,l=0,f=0,r;
    int len=sizeof(a)/sizeof(a[0]);
	printf(" ENter a element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter serach key\n");
	scanf("%d",&skey);
	r=(len-1);
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(a[mid]==skey)
		{
			f=1;
			break;
		}
		if(a[mid]<skey)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	if(f)
	{
		printf("value found");
	}
	else
	{
		printf(" value not found");
	}
}