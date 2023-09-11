/*Write a program in C to find out the maximum difference between any two elements such that 
larger element appears after the smaller number.
Expected Output :
The given array is : 7 9 5 6 13 2
The elements which provide maximum difference is: 5, 13
The Maximum difference between two elements in the array is:8 */
#include<stdio.h>
int main()
{
	int size;
	printf("Enter a array size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter a array element\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int index1,index2;
	int maxdiff=0;
	printf("Enter a array index \n");
	scanf("%d%d",&index1,&index2);
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if((arr[i]==index1&&arr[j]==index2)||(arr[i]==index2&&arr[j]==index1))
			{
				int diff=arr[j]-arr[i];
				if(diff>maxdiff)
				{
					maxdiff=diff;
				}
			}
		}
	}
	printf("\nThe maximum Diffrance Betwwen Two no is %d",maxdiff);
}