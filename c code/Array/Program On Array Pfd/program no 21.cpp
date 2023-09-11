/*Write a program in C to find if a given integer x appears more than n/2 times in a sorted array 
of n integers ?
Expected Output :
The given array is : 1 3 3 5 4 3 2 3 3
The given value is : 3
3 appears more than 4 times in the given array[*/
#include<stdio.h>
int main()
{
	int size,i,j,value,count=0;
	printf(" Enter a array size\n");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf(" Dispay matrix\n");
	for(i=0;i<size;i++)
	{
		printf(" %d\t",a[i]);
	}
	printf("\nEnter a value\n");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(a[i]==value)
		{
			count++;
		}
	}
	if(count>(size/2))
	{
		printf("%dappears more than %dtimes in the given array",value,count);
	}
	else
	{
		printf(" value is not no of half of size");
	}
}