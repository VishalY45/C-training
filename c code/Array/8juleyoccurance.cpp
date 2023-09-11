#include<stdio.h>
int main()
/*
{
	int a[5],i,j,count=0,f=-1;

	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter a array element");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
		int fr[len];
	for(i=0;i<len;i++)
	{
		count=1;
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				fr[j]=f;
			}
			if(fr[i]!=f)
			fr[i]=count;
		}
		
	}
	for(i=0;i<len;i++)
	{
		if(fr[i]!=f)
		{
			printf("\na[%d]-->%d",a[i],fr[i]);
		}
	}
}
*/
/*
{
	int a[5],i,j,diff;
	printf(" Enter a element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		diff=a[i+1]-a[i];
		if(diff>1)
		{
			for(j=a[i];j<(a[i+1]-1);)
			{
				printf("%d",++j);
			}
		}
	}
}
*/

{
	int a[5],i,j;
	printf("Enter array value");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n before revese it");
	for(i=0;i<5;i++)
	{
	printf("\na[%d]---->%d",i,a[i]);
}
printf("\n after revese it");
i=0;
for(j=4;j>=i;j--)
{
	printf("\na[%d]---->%d",i,a[j]);
}
}

			