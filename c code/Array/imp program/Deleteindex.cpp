#include<stdio.h>
int main()
{
	int size,i,f=0;
	int delet;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter which index you want to delete\n");
	scanf("%d",&delet);
	for(i=0;i<size;i++)
	{
		if(i==delet)
		{
			f=1;
			break;
        }
        
	}
	if(f==1)
	{
		for(int j=i;j<size;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	else
	{
		f=0;
		printf("\nValue is not found\n");
	}
	if(f!=0)
	{
	
	for(i=0;i<size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
    }
}