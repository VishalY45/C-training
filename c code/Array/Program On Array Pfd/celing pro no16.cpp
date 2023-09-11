 /*Write a program in C to find the ceiling in a sorted array?
Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array 
greater than or equal to x, and the floor is the greatest element smaller than or equal to x.
Expected Output :
The given array is : 1 3 4 7 8 9 9 10
The ceiling of 5 is: 7*/
#include<stdio.h>
int main()
{
	int a[5],i,j,ceil;
	printf(" Enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDispaly matrix");
	for(i=0;i<5;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf("\nEnter a no");
	scanf(" %d",&ceil);
	for(i=0;i<5;i++)
	{
		if(a[i]>=ceil)
		{
		   printf(" The ceil of %d is %d",ceil,a[i]);
		   break;	
		}
	}
}