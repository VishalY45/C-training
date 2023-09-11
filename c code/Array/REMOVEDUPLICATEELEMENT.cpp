#include<stdio.h>
int main()
/*{
	int size,i,j,f=0;
	printf(" Enter array size\n");
	scanf("%d",&size);
	int a[size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array \n");
	for(i=0;i<size;i++)
	{
		f=0;
		for(j=i+1;j<size;j++)//32-162
		{
			if(a[i]==a[j])
			{
				f=1;
				a[j]=-1;
				
			}
		}
		if(f==0&&a[i]!=-1)
		{
			printf("%d",a[i]);
		}
	}
}*/
{
	int size,i,j,f=0;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf(" ENter a array element");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		}
		printf("\n Display array\n");
		for(i=0;i<size;i++)
		{
			f=0;//2 3 4 4 3
			for(j=0;j<size;j++)
			{
				if(a[i]==a[j])
				{
					f++;
				}
			}
		   if(f==1)
		   printf("%d",a[i]);
			}	
		}
	