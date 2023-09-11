#include<stdio.h>
int main()
{
	int a[5],i,j,f=1,k=-1;
	printf(" Enter a element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" before removing\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	printf(" after removing\n");
	for(i=0;i<5;i++)
	{
		f=1;//1 2 3 4 2
		for(j=i+1;j<5;j++)
		{
		if(a[i]==a[j])//1==2
		{
			
			f=0;
			a[j]=k;
			}
		
		}
		
	if(f&&a[i]!=k)
	{
		printf("a[%d]---%d\n",i,a[i]);
	}
	}
	
}