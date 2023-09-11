/*WAP to create function name as int getCount(int a[],int value): this function accept array as
 parameter as well as one single value and you have to search value in array and return its occurrence count in array and 
 if value not found return -1 at function calling 
when function return -1 then we consider value not found otherwise consider value found.
*/
#include<stdio.h>
int main()
{
	int getcount(int[],int);
	int a[5],value;
	printf(" Enter a value\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" ENter a search key");
	scanf("%d",&value);
	int result=getcount(a,value);
	if(result==-1)
	{
		printf(" value is not found");
	}
	else
	{
	
	printf("value is found %d times",result);
}
	
}
int getcount(int a2[],int value)
{
	int count=0,i;

	
		for(i=0;i<5;i++)
	{
	
		if(a2[i]==value)
		{
		count++;	
		}
	}
	if(count==0)
	{
		return -1;
	}
	else
	return count;	
}