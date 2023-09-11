/*) Write a program in C to to print next greater elements in a given unsorted array. Elements for 
which no greater element exist, consider next greater element as -1.
Expected Output :
The given array is : 5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
Next Bigger Elements Array:
10 10 13 13 13 -1
*/
#include<stdio.h>
int main()
{
	
	int i,j,temp=-1,size;
	printf(" Enter the size of array\n");
	scanf("%d",&size);
	int a[size],c[size];
	printf(" enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display arraay\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)//4 6 8 9
	{
		c[i]=-1;
		for(j=i+1;j<size;j++)
		{
		
			if(a[i]<a[j])
			{
				
				c[i]=a[j];
				break;
			}
		}
		printf("\nNext bigger element of %d in the array is%d\n",a[i],c[i]);
	}
	printf(" Next Bigger Elements Array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",c[i]);
	}
}