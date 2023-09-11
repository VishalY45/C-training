/*) Write a program in C to find the minimum distance between two numbers in a given array.
Expected Output:
The given array is:
7
7 9 5 11 7 4 12 6 2 11
The minimum distance between 7 and 11 is: 1*/
/*#include<stdio.h>
int main()
{
	int size,i,j,temp;
	printf(" Enter arrry size\n");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter arry element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int minDiff1,minDiff2,count=0;
	printf("Enter a index\n");
	scanf("%d%d",&minDiff1,&minDiff2);
	for(i=0;i<size;i++)
	{
	    count=0; 
		if(minDiff1==arr[i]||minDiff2==arr[i])
		{
				
			for(j=i+1;j<size;j++)
			{
			    count++;
			    temp=count;
				if(arr[j]==minDiff1||minDiff2==arr[j])
				break;
			}
		}
		break;
		
	}
	printf("The minimum distance between %d and %d is%d",minDiff1,minDiff2,temp);
	
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,i,j,temp;
	printf(" Enter arrry size\n");
	scanf("%d",&size);
	temp=size;
	int arr[size];
	printf(" Enter arry element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int minDiff1,minDiff2,count=0;
	printf("Enter a index\n");
	scanf("%d%d",&minDiff1,&minDiff2);//7 9 5 11 7 4 12 6 2 11 //7==11
	for(i=0;i<size;i++)
	{
	    for(j=i+1;j<size;j++)
	    {
	    	if((minDiff1==arr[i]&&minDiff2==arr[j])||(minDiff2==arr[i]&&minDiff1==arr[j]))
	    	{
	    		 int count=abs(j-i);
	    		 if(count<temp)
	    		 temp=count;
	
			}
		}
	
	}
	if(temp==size)
	{
		printf("jdkjbc");
	}
	else
		printf("The minimum distance between %d and %d is%d",minDiff1,minDiff2,temp9
		temp
		7 11
		9);
	
}
