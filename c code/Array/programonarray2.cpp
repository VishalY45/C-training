#include<stdio.h>
int main()
//48
/*
)Write a program in C to check whether a given matrix is an identity matrix.
Test Data :
Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
Expected Output :
The matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix
*/
/*{
	int size,i,j,f=1;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{	
		scanf("%d",&a[i][j]);
		}
	}
	  for(i=0;i<size;i++)
	  {
	  
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		if((i==j)||(a[i][j]==0))
		{
			f=1;
		}
		else
		{
			f=0;
			break;
		}
		
	}
	}
	printf("\nResult  of matrix\n");
	if(f)
	{
		printf(" Given matrix is identity matrix\n");
	}
	else
	{
		printf(" given matrix is not identity matrix\n");
	}
	}*/
// 47)-----------------------------------------------------------
//Write a program in C to accept two matrices and check whether they are equa
/*{
	int size,i,j,f=1;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" Array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		
		scanf("%d",&a[i][j]);
	}
	}
	int b[size][size];
	printf(" Enter second array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	f=1;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				f=0;
				break;
			}
		}
	}
	if(f==1)
	{
		printf(" The matrix are equal\n");
	}
	else
	{
		printf(" The matrix not are equal\n");
	}
}*/
// 46)------------------------------------------------
//Write a program in C to accept a matrix and determine whether it is a sparse matrix.
{
	int size,i,j,count=0;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{ count=1;
		for(j=0;j<size;j++)
		{
			if(a[i][j]==0)
			{
				++count;
			}
		}
	}
	printf("%d",count);

	if(count>(size/2))
	{
		printf(" The matrix is spharse ");
	}
	else
	{
			printf(" The matrix not is spharse ");
	}
	printf("There are %d number of zeros in the matrix",count);
	
}
//44)--------------------------------------------------------------------------------
//)Write a program in C to print or display upper triangular matrix

/*{
	int size,i,j;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i<j)
			{
				printf("0");
			}
			else
			{
				printf("%d",a[i][j]);
			}
		}
		printf("\n");
	}
}*/
		
		//	for(i=0;i<size;i++)
/*	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		}
	}*/
//43)------------------------------------------------
//Write a program in C to print or display the lower triangular of a given matrix.
/*{
	int size,i,j;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[i][j];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i>j)
			{
				printf("0");
			}
			else
			{
				printf("%d",a[i][j]);
			}
		}
		printf("\n");
	}
	}	*/
// 42)-------------------------------------
//Write a program in C to find sum of rows an columns of a Matrix
/*{
	int size,i,j,sum=0,sum1=0;
	printf("enter size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<size;i++)
	{
		
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<size;i++)
	{
		sum=0;
		for(j=0;j<size;j++)
		{
			sum=sum+a[i][j];
			
		}
		printf("\nThe sum of %d row:-%d\n",i+1,sum);
	}
	for(i=0;i<size;i++)
	{
		sum1=0;
		for(j=0;j<size;j++)
		{
			sum1=sum1+a[j][i];
		}
		printf("\nThe sum of %d column:-%d\n",i+1,sum1);
	}

}*/
// 41)-------------------------------------------------------------------------
//)Write a program in C to find the sum of left diagonals of a matri
/*
{
	int size,i,j,sum=0;
	printf("enter size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Display matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	 for(i=0;i<size;i++)
	 {
	 	for(j=0;j<size;j++)
	 	{
	 		if(i==j)
	 		{
	 			sum=sum+a[i][j];
			 }
		 }
	 }
	 printf(" The diogonal sum is:-%d",sum);
}*/
//40)-----------------------------------------------------------------------------
//)Write a program in C to find sum of right diagonals of a matrix
/*{
	int size,i,j,sum=0;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Display matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(j<=(size-1)-i&&j>=(size-1)-i)
			sum=sum+a[i][j];
		}
	}
	printf("The right dioganal sum:-%d",sum);
}*/
//-------------------------------------------------------------------------------------

			
	
	