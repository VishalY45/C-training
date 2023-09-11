//. WAP to create function name as int getSecondHighest(int a[]): this function is 
//used for accept array as parameter and find second highest value and return it.
#include<stdio.h>
int main()
{
	int getsecondhighest(int[]);
	int arr[6],result;
	printf(" Enter a array\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	result=getsecondhighest(arr);
	printf(" Second highest no is :-%d",result);
}
int getsecondhighest(int arr2[])
{
   int i,j;
   for(i=0;i<6;i++)
   {
   	for(j=i+1;j<6;j++)
   	{
   		if(arr2[i]<arr2[j])
   		{
   			int temp=arr2[i];
   			arr2[i]=arr2[j];
   			arr2[j]=temp;
		   }
	   }
	   }
	   for(i=0;i<6;i++)
	   {
	   	printf("%d\t",arr2[i]);
	   }
	   return arr2[1];	
}