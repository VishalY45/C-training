#include<Stdio.h>
int main()
{
	int a[5],i,j,f=0;
	printf(" Enter array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" before removing");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]---->%d",i,a[i]);
	}
	printf("\nAfter removing\n");
	for(i=0;i<5;i++)
	{
		f=0;
		for(j=0;j<5;j++)
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

