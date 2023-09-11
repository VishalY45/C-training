/*
Write a program in C to find a pair with the given difference
Expected Output:
The given array is:
1 15 39 75 92
The given difference is: 53
The pair are: (39, 92)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,size,diff;
	printf(" Enter arry size");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Enter a diffrance\n");
	scanf("%d",&diff);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(abs(arr[i]-arr[j])==diff)
			{
				printf("The pair are:%d %d\n",arr[i],arr[j]);
			}
		}
	}
}