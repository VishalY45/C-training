#include<stdio.h>
int main()
{
	int a[5],i,j,len,temp;
	printf(" Enter a no");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before revrse");
	for(i=0;i<5;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf(" After revere it\n");
	for(i=0;i<5;i++)
	{
	//	temp=a[i];
		for(j=i+1;j<=5;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		printf("a[%d]--->%d\n",i,temp);
	}

}