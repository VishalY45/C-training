/*Expected Output:
The given array is:
5 2 3 7 6 4 9 8
The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
Number of distinct pairs for difference 5 are: 3
*/
#include<stdio.h>
int main()
{
	int size,i,j,dis,count=0;
	printf(" Enter array size");
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
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nEnter distint no\n");
	scanf("%d",&dis);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if((a[i]-a[j])==dis)
			{
			printf("%d\t%d\n",a[i],a[j]);	
			count++;
			}
		}
	}
	printf("Number of distinct pairs for difference %d are %d",dis,count);
}