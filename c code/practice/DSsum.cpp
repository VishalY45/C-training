#include<Stdio.h>
int main()
{
	int a[5],sum=0,i;
	printf(" \n Enter the values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n display array\n");
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		printf("\na[%d]----->%d",i,a[i]);
	}
	printf("\nSum is%d\n",sum);
}