#include<stdio.h>
int main()
{
	int a[3][3],i,j,x,count=0;
	printf(" Enter 9 element\n");
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
			if(a[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count>4)
	{
		printf(" The given is pharse matrix\n");
	}
	else
	{
		printf(" The given matrix dense matrix\n");
		x=5-count;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]!=0)
				{
					a[i][j]=0;
					x--;
				}
				if(x==0)
				break;
			}
			if(x==0)
			break;
			
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		count=0;
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
		if(count>4)
		{
			printf(" The given matrix is pharse matrix\n");
		}
	}
}