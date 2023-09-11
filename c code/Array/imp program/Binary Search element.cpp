#include<stdio.h>
int main()
{
	int size,mid,l=0,r,i,sValue;
	int f=0;
	printf("Enter array size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter value which you want to search");
	scanf("%d",&sValue);
	r=size-1;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(arr[mid]==sValue)
		{
			 f=1;
			break;
		}
		if(arr[mid]<sValue)
		{
		  l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	
	}
	if(f==1)
	{
	  printf(" Value is found");	
	}
	else
	{
		printf("Value is not found\n");
	}
	}
