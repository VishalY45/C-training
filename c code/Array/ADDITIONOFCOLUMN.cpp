#include<stdio.h>
int main()
{
	int a[3][3],i,j,k,sum;
	printf(" Enter a 9 element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Frist matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf(" Result\n");
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
		sum=sum+a[j][i];
		}
		printf("The add is %d column %d\n",(i+1),sum);
	}
}