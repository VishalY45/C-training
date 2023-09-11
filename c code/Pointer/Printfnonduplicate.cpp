#include<stdio.h>
int main()
{
	int size,i,j,f=0;
	printf("Enter array size:-\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay array\n");
	for(i=0;i<size;i++)
	{
		f=0;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				f=1;
					a[j]=-1;
				break;
			}
	   }
		if(f==0&&a[i]!=-1)
		{
				printf("%d\n",a[i]);
		}
	}
}