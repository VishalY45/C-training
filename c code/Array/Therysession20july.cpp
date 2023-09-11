#include<stdio.h>
int main()
// wap to find even values and multyply by 2 and update in matrix
/*{
	int a[3][3],i,j;
	printf(" ENter a nine element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Before multilplication\n");
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
			if(a[i][j]%2==0)
			{
				a[i][j]=a[i][j]*2;
			}
		}
	}
	printf(" after multliplication\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}*/
/*
{
	int a[3][3],i,j,sum=0,sum1=0;
	printf(" Enter a element");
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
			if(i%2==0&&i!=0)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("The add is even row %d\n",sum);
	for(i=1;i<3;i++)
	{
		if(i%2!=0)
		for(j=0;j<3;j++)
		{
			sum1=sum1+a[j][i];
		}
	}
	printf(" The add is odd column %d\n",sum1);
}*/

{
	int a[3][3],i,j,count=0;
	printf(" Enter a element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Display matrix\n");
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
			if(a[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count>(9/2))
	{
		printf(" matrix is sparse");
	}
	else
	{
		printf(" matrix is not spharse");
	}
}