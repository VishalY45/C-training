#include<stdio.h>
int main()

{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	printf(" Enter a array element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Enter second matrix element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{                              // 10*0*1=4*1=4=11*2*1=5*8=40
				sum=sum+a[i][k]*b[k][j];//00*00=1*1=1=01*1*0=2*4=8=02*2*0=3*821
			}
			c[i][j]=sum;
		}
	}
	printf(" Display frist matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf(" Display second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf(" display result\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

/*
{
	int a[3][3],i,j,sum=0,sum1=0;
	printf(" Enter a 9 element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" The matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%9d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
			if(j<=2-i&&j>=2-i)
			sum1=sum1+a[i][j];
		}
	}
	printf("Left diogonal:-%d\n",sum);

	printf("Right diogonal:-%d",sum1);
}
*/
/*{
	int a[3][3],b[3][3],c[3][3],i,j,k,mul=0;
	printf(" Enter a frist matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Enter second matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				mul=mul+(a[i][k]+b[k][j]);
			}
			c[i][j]=mul;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}*/
