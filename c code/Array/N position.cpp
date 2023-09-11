/*
Write a program in C to rotate an array by N positions ?
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9
*/

#include<stdio.h>
int main()
{
	int size,temp,i,index,j;
	printf(" Enter  arry size\n");
	scanf("%d",&size);
	int a[size];
	printf(" ENter a array size\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" ENter a rotote index\n");
	scanf("%d",&index);
	for(i=0;i<index;i++)
	{
		temp=a[0];
		for(j=1;j<size;j++)
		{
			a[j-1]=a[j];
		}
		a[size-1]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}