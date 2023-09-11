
#include<stdio.h>
int main()
{
	int i,j,s1=5,s2=5,size,size1,a[i],b[i],merge;
	printf(" ENter a size of array\n");
	scanf("%d",&size);
//	size=sizeof(a)/sizeof(a[0]);
     printf(" Enter frist element array");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&a[i]);
	 }
	 printf(" Enter size of frist array");
	 scanf("%d",&size1);
	 printf(" Enter second array element\n");
	 for(i=0;i<size1;i++)
	 {
	 	scanf("%d",&b[i]);
	 }
     
     merge=size+size1;
     int c[merge];
     for(i=0;i<size;i++)
     {
     	c[i]=a[i];
	 }
	 	for(i=0,j=size;j<merge&&i<size;i++,j++)
	 	{
	 		c[j]=b[i];
		 }
		 for(i=0;i<merge;i++)
		 {
		 	printf("%d\t",c[i]);
		 }
}
/*
{
	int i,j,a[5],b[5];
	printf(" ENter a array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" seconf array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	
}
*/
/*
{
	int a[5],i,j,count=1,f=-1,p=0,k;
	printf(" Enter a no");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" display array\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	printf(" After removing\n");
	for(i=0;i<5;i++)
	{
		count=1;
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				count=0;
				a[j]=f;
			}
			
		}
			if(count&&a[i]!=f)
			printf("a[%d]---->%d\n",i,a[i]);
		}
	}*/
