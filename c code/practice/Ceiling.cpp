#include<stdio.h>
int main()
{
	int size,i,j,temp,f=0,no;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf(" Enter a ceiling");
	scanf("%d",&no);
	for(i=0;i<size;i++)
	{
		if(a[i]>=no)
		{
			f=1;
			printf("The ceil of %d is %d",no,a[i]);
			break;
		}
	}
	if(f==0)
	{
		printf("The ceil of %d is -1",no);
	}
}
