/*Write a program in C to find a pair with the given difference
Expected Output:
The given array is:
1 15 39 75 92
The given difference is: 53
The pair are: (39, 92)*/
#include<stdio.h>
int main()
{
	int size,i,j,diff;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("The given difference is:");
	scanf("%d",&diff);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			
			                      //1 15 39 75 92
			                      //  2=39
			if((a[i]-a[j])==diff)//  
			{
				printf("The pair are:%d %d\n",a[i],a[j]);
			}
		}
	}
}