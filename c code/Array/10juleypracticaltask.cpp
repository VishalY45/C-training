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
/*
{
	int a[5],i,j;
	printf("Enter array value\n");
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
int nsize=0;
for(j=4;j>=i;j--)
{
/*	nsize=a[j];
	a[j]=a[i];
	a[i]=nsize;*/
	//printf("\na[%d]---->%d",j,a[nsize]);
	
//}}
//*/
{
	int a[5],i,j,nsize=0;
	printf("Enter array value\n");
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
for(i=0;i<5;i++)
{
	for(j=i+1;j<=5;j++)
	{
		nsize=a[i];
		a[i]=a[j];
		a[j]=nsize;
		
	}
	printf("\na[%d]--->%d",i,nsize);
}
}


			