#include<stdio.h>
int main()
{
	int size,i,j,f=1,k=2;
	printf(" ENter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" prime no:-");
	for(i=0;i<size;i++)//2 3 4 5 6 7
	{
		f=0;
		k=2;
		while(k<a[i])//2<4
		{
			if(a[i]%k==0)
			{
			
			f=1;
			break;
		}
			k++;
		}
		if(f==0&&a[i]!=1)
	{
		printf("%d\n",a[i]);
	}
		
	}
	
}