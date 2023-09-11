/*Write a program in C to find out the maximum difference between any two elements such that 
larger element appears after the smaller number.
Expected Output :
The given array is : 7 9 5 6 13 2
The elements which provide maximum difference is: 5, 13
The Maximum difference between two elements in the array is: */
#include<stdio.h>
int main()
{
	int size;
	int index1,index2,count=0;
	printf(" Enter array size");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter array element\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Enter a diffrance index\n");
	scanf("%d%d",&index1,&index2);
	for(int i=0;i<size;i++)
	{
		if(index1==a[i])
		{
			while(index1==index2)
			{
				count++;
				index1++;
			}
		  break;	
		}
	}
	printf("\nThe Maximum difference between two elements in the array is:%d",count);
}