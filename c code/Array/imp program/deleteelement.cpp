#include<stdio.h>
int main()
{
	int size,i,j,dKey,f=0;
	printf("Enter a array element\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a Delete index");
	scanf("%d",&dKey);
	for(i=0;i<size;i++)
	{
		if(a[i]==dKey)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
	
	for(j=i;j<size;j++)
	{
		a[j]=a[j+1];
	}
}
	for(i=0;i<size-1;i++)
	{
	  printf("%d\t",a[i]);	
	}
}