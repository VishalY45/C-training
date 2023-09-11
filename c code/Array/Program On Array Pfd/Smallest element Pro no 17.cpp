/*Write a program in C to find the smallest missing element from a sorted array?
Expected Output :
The given array is : 0 1 3 4 5 6 7 9
The missing smallest element is: 2
*/
#include<stdio.h>
int main()
{
	int a[7],i,j,diff;
	printf(" enter array element\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" missing element:-");
	for(i=0;i<7;i++)
	{
		diff=a[i+1]-a[i];
		if(diff>1)
		{
			for(j=a[i];j<a[i+1]-1;)
			{
				printf("%d\n",++j);
			}
		}
	}
}