#include<stdio.h>
int main()
{
	int size,i,j,value,f=0;
	printf(" Enter a size");
	scanf("%d",&size);
	int arr[size];
	printf("\n Enter a array elemnt\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Enter a which value you want to delete\n");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		for(j=i;j<size;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	else
	{
		f=0;
		printf("\nThe value is not present in array\n");
	}
	//if(f!=0)
	//{
	   for(i=0;i<size-1;i++)
	   {
		   printf("%d\n",arr[i]);
	   }
	//}//

}