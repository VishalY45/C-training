//: WAP to remove the duplicated element from array #include<stdio.h>
#include<stdio.h>
int main()
{
	int size,i,j,f=0;
	printf("Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nDisplay array");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("Display result\n");
	for(i=0;i<size;i++)
	{
		f=0;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
			   f=1;
			   arr[j]=-1;
			   break;	
			}
		}
		if(f==0&&arr[i]!=-1)
		{
			printf("%d\n",arr[i]);
		}
	}
}