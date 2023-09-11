/*WAP to create array and pass to function and find max value from array using a recursion 
you have to design function name as 
int getMax(inta[]): this function accept array as parameter and return max value from array.*/
#include<stdio.h>
	int  max=0,i=0;
	int getmax(int a[])
{
   
   if(i<5)
   {
   
		if(a[i]>max)
		{
			max=a[i];
		}
			i++;
		return getmax(a);
		}
		
	return max;
	
}

int main()
{
	int a[5],i;
	printf(" ENter a value");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int result=getmax(a);
	printf("Max:-%d",result);
		
}
