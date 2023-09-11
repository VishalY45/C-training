//WAP to input 5 values in ascending order and find missing element of array
#include<stdio.h>
int main()
{
	int a[5],diff,i,j;
	printf(" Enter a array element\n");
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		diff=a[i+1]-a[i];
		if(diff>1)
		{
		for(j=a[i];j<a[i+1]-1;)
		{
			printf("\n%d",++j);
			}	
		}
	}
}