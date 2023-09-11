 /*Write a program in C to find a subarray with given sum from the given array?
Expected Output :
The given array is : 3 4 -7 1 3 3 1 -4
[0..1] -- { 3 4 }
[0..5] -- { 3 4 -7 1 3 3 }
[3..5] -- { 1 3 3 }
[4..6] -- { 3 3 1 }*/
#include<stdio.h>
int main()
{
	int size,index1,index2,i,j,f=0;
	printf(" Enter array size\n");
	scanf("%d",&size);
	printf(" Enter a array elemant\n");
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter array index\n");
	scanf("%d%d",&index1,&index2);
	for(i=0;i<size;i++)
	{
		
			if(i>=index1&&i<=index2)
			{
			for(i=index1;i<=index2;i++)
				{
					printf("%d\t",a[i]);
				}	
			}
	}
}