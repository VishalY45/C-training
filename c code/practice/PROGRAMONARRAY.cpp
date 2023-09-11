/*) WAP to enter the five elements in array and calculate the sum of all elements
 a[0] a[1] a[2] a[3] a[4]
10 20 30 40 50
Output : Sum of all array elements : 150
*/
#include<stdio.h>
int main()
/*
{
	int a[5],i,sum=0;
	printf(" Enter a array element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" addition of array:-");
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		
	}
	printf("%d",sum);
	return 0;
}*/
/*) WAP to enter the five elements in array and find out the maximum and minimum elements
a[0] a[1] a[2] a[3] a[4]
Output like as
Maximum element in array : 11
Minimum element in array : 4
*/
/*{
	int a[5],min,max,i;
	printf(" ENteer a array element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[5-1];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Minimum no is %d\n",min);
	printf("maximum no is %d\n",max);
}*/
/*
// 3)
WAP to enter the five element and display in ascending order ?
a[0] a[1] a[2] a[3] a[4]
5 3 6 4 1
Output like as
1 3 4 5 6*/
/*{
	int a[5],i,temp,j;
	printf(" Enter a array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" After a swaping\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}*/