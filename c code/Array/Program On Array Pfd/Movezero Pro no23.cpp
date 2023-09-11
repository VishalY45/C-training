/*Write a program in C to move all zeroes to the end of a given array.
Expected Output :
The given array is : 2 5 7 0 4 0 7 -5 8 0
The new array is:
2 5 7 8 4 -5 7 0 0 0*/
#include<stdi.h>
int main()
{
	int size,i,j;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size];
	j=0;
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Dispaly matrix\n");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<size;i++)//12304
	{
		if(a[i]!=0)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j++;
		}
	}
	printf("\n new array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
}