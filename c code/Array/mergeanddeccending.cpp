#include<stdio.h>
int main()
{
	int s1,s2,s3,i,j,k;
	printf(" Enter array elelemnt\n");
	scanf("%d",&s1);
	int a[s1];
	printf(" Enter array element\n");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter the second array size\n");
	scanf("%d",&s2);
	int a2[s2];
	printf(" Entet second array element\n");
	for(i=0;i<s2;i++)
	{
		scanf("%d",&a2[i]);
	}
	s3=s1+s2;
	int a3[s3];
	for(i=0;i<s1;i++)
	{
		a3[i]=a[i];
	}
	for(j=0;j<s2;j++)
	{
		a3[i]=a2[j];
		i++;
	}
	for(i=0;i<s3;i++)
	{
		for(k=0;k<s3-1;k++)
		{
			if(a3[k]<a3[k+1])
			{
				int temp=a3[k+1];
				a3[k+1]=a3[k];
				a3[k]=temp;
			}
		}
	}
	for(i=0;i<s3;i++)
	{
		printf("%d\t",a3[i]);
	}
}