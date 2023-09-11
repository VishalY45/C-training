/*) Write a program in C to find two elements whose sum is closest to zero
Expected Output :
The given array is : 38 44 63 -51 -35 19 84 -69 4 -46
The Pair of elements whose sum is minimum are:
[44, -46]*/
#include<stdio.h>
int main()
{
	int size,sum=0,sum1=0,i,j,f=0;
	printf(" Enter a array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter a array element\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			sum=(a[i]+a[j]);
			if(sum<=sum1)
			{
				f=1;
				sum1=sum;
			}
		}
	}
	if(f==1)
	printf("%d %d %d",i,j,sum1);
}