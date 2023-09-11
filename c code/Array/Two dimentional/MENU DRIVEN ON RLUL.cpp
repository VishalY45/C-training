#include<stdio.h>
int main()
{
	int choice,i,j;
	int size;
	printf("Enter array a size\n");
	scanf("%d",&size);
	int arr[size][size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Display array\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	do
	{
	printf("1:LEFT DIOGONAL 0\n");
	printf("2:RIGHT DIOGONAL 0\n");
	printf("3:UPPER TRINGULAR 0\n");
	printf("4:LOWER TIRNGULAR 0\n");
	printf("Enter a choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i==j)
			{
				arr[i][j]=0;
			}
		}
	}
	printf("Result matix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	break;
	case 2:
		for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		//	if(i==j||(j>=2-i&&j<=2-i))
		if(j>=2-i&&j<=2-i)
			{
				arr[i][j]=0;
			}
		}
	}
		for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	break;
	case 3:
		for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(j>i)
			{
				arr[i][j]=0;
			}
		}
	}
	printf("\nDisplay Result\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	break;
	case 4:
			for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		   if(j<i)
		   {
		   	arr[i][j]=0;
			   }	
		}
	}
	printf("Display Result\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	break;
	default:
		printf("Wrong choice");
	}
	}while(choice!=5);
	
}