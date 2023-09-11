#include<stdio.h>
int main()
{
	int a[5],i,j,mid;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter a array element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<(len-1);i++)
	{
		mid=i;
		for(j=i+1;j<len;j++)
		{
			if(a[j]<a[mid])
			{
				mid=j;
			}
		}
		if(a[mid]!=i)
		{
			int temp=a[i];
			a[i]=a[mid];
			a[mid]=temp;
		}
	}
	printf("\n After sorting\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
/*
  {           int a[5],i,j,min_ind;
	int len=sizeof(a)/sizeof(a[0]);
	printf("\nenter values in array\n");
	for(i=0;i<(len);i++){
		scanf("%d",&a[i]);
	}
	printf("\nArray before sorting\n");
	for(i=0; i<len; i++){
		printf("%d\t",a[i]);
	}
	//apply selection sort algorithm
	for(i=0;i<(len-1);i++){
		min_ind=i;
		for(j=(i+1);j<len;j++){
			if(a[j]<a[min_ind]){
				min_ind=j;
			}
		}
		if(min_ind!=i){
			int temp=a[i];
			a[i]=a[min_ind];
			a[min_ind]=temp;
		}
	}
	printf("\nAfter Sorting\n");
	for(i=0; i<len; i++){
		printf("%d\t",a[i]);
	}
       return 0;
}*/
