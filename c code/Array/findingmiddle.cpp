#include<stdio.h>
int main()
{
	int a[5],i,diff,j;
	printf(" Enter a element\n");
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		diff=a[i+1]-a[i];
		if(diff>1)
		{
			for(j=a[i];j<(a[i+1]-1);)
			{
				printf("%d\t
				",++j);
			}
		}
}
}