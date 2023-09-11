#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf(" ENter a array element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Display matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i==j)||(j>=2-i&&j<=2-i))
			{
			
			a[i][j]=1;
	}

		else
		{
			a[i][j]=0;
		}
			
		
			
	}
}
	printf("result matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}