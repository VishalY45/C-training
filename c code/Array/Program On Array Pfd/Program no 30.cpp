/*
Write a program in C to find the minimum distance between two numbers in a given array.
Expected Output:
The given array is:
7 9 5 11 7 4 12 6 2 11
The minimum distance between 7 and 11 is: 1
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int size,i,j,index,index1;
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
	printf(" Enter to find distance between no");
	scanf("%d%d",&index,&index1);
	for(i=0;i<size;i++)
	{
		int count=0;
		if(a[i]==index)
		{
			for(j=i+1;j<size;j++)
			{
				if(a[j]==index1)
				{
					count++;
					printf("The minimum distance between %d and %d is: %d",index,index1,abs(index-index1));
				}
			}
		}
	}
}