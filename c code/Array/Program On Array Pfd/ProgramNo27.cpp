/*The array range is [0..n-1] and the elements are in the range [0..k-1] and k<=n..
Expected Output:
The given array is:
2 3 3 5 3 4 1 7 7 7 7
The maximum repeating number is: 
*/
#include<stdio.h>
int main()
{
	int size,i,j,count=0,total=0,f;
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
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
			count++;
			a[j]=-1;
			f=a[i];	
			}
		}
		if(count>total)
		{
			total=count;
		}
	}
	printf("The maximum repeating number is:%d",f);
}