/*
 Write a program in C to find the minimum distance between two numbers in a given array.
Expected Output:
The given array is:
7 9 5 11 7 4 12 6 2 11
The minimum distance between 7 and 11 is: */
#include<stdio.h>
int main()
{
	int size,i,j,no1,no2;
	printf(" ENter a size\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display elment\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" ENter a no\n");
	scanf("%d%d",&no1,&no2);
	for(i=0;i<size;i++)
	{
	//	if (a[i]==no1||a[i]==no2)
		int sum=0,k=0;
			for(j=i+1;j<size;j++)
			{ 
				while(no1<=no2)
				{
				   k++;	
				   no1++;
				}
				sum=k;
				printf("%d",k);
			}
		
	}
}