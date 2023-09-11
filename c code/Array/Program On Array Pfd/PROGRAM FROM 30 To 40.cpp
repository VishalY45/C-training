#include<stdio.h>
#include<stdlib.h>
int main()
//31)-----------------------------------------------
//Write a program in C to rearrange positive and negative numbers alternatively in a given array

/*{
	int size,i,j,f=1;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	printf(" ENter array only pos or nag element");
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("\nDisplay array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	int a3[size];
	j=0;
	for(i=0;i<size;i++)//1 -2 -5 7 -4 5
	{
		if(a[i]>0&&f==1)
		{
			a3[j++]=a[i];
			f=0;
		}
		else{
			a3[j++]=a[i];
			f=1;
		}
	}
	printf("\nResult array\n");
	for(j=0;j<size;j++)
	{
		printf("%d\t",a3[j]);
	}
}*/
//32)----------------------------------------------------------------------------
//2)Write a program in C to find the maximum for each and every contigious subarray of size k 
//from a given array
/*{
	int size,i,j,k,max;
	printf(" ENter a size\n");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display array");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter a len\n");
	scanf("%d",&k);
	max=a[0];
	for(i=0;i<=size-k;i++)//1 3 6 21 4 9 12 3 16 10
	{
		max=a[i];
		for(j=i+1;j<i+k;j++)//21 21//21//21
		{
			if(max<a[j])
			{
				max=a[j];
				
			}
		
		}
		printf("The maxumum no is:-%d\n",max);
	}
	
}*/
// 33)--------------------------------------------------------
/*Write a program in C to convert the array in such a way that double its value and replace the 
next number with 0 if current and next element are same and rearrange the array such that all 0's 
shifted to the end*/
/*{
	int size,i,j;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int arr[size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
	j=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]!=0)
		{
			arr[i]=arr[i]*2;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
			
		}
	}
	printf("\nDisplay result\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}*/
//34)--------------------------------------------------------------
//)Remove duplicates from unsorted array using Set data structure
/*{
	int size,i,j,f=1,k=-1;
	printf(" ENter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("DIsplay arry element\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nAfter removing array\n");
   for(i=0;i<size;i++)
	{
		f=1;//1 2 3 4 2
		for(j=i+1;j<size;j++)
		{
		if(a[i]==a[j])//1==2
		{
			f=0;
			a[j]=k;
			}
		
		}
		
	if(f&&a[i]!=k)
	{
		printf("a[%d]---%d\n",i,a[i]);
	}

}}*/
//35---------------------------------------------------
//Write a program in C for a 2D array of size 3x3 and print the matrix ?
/*{
	int size,i,j;
	printf(" ENter array size\n");
	scanf("%d",&size);
	printf(" Arry element\n");
	int a[size][size];
	for(i=0;i<size;i++)
	{
	  for(j=0;j<size;j++)
	  {
	  	scanf("%d",&a[i][j]);
	  }
	}
	printf("\n Display array\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}*/
// 36)--------------------------------------------------------------------
//Write a program in C for addition of two Matrices of same size.

/*{
	int size,i,j;
	printf(" Enter size of matrix\n");
	scanf("%d",&size);
	int a[size][size];
	printf("array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int a2[size][size];
	printf(" Enter second matrix element");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	printf(" The frist matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Second matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	int c[size][size];
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			c[i][j]=a[i][j]+a2[i][j];
		}
	}
     printf("\nThe Addition is:-\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}*/
// 37-----------------------------------------------
//Write a program in C for subtraction of two Matrices.
/*{
	int size,i,j;
	printf(" Enter size of matrix\n");
	scanf("%d",&size);
	int a[size][size];
	printf("array element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int a2[size][size];
	printf(" Enter second matrix element");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	printf(" The frist matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Second matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	int c[size][size];
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			c[i][j]=a[i][j]-a2[i][j];
		}
	}
     printf("\nThe substraction is:-\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",(c[i][j]));
		}
		printf("\n");
	}
}*/
// 38)------------------------------------------------
//Write a program in C for multiplication of two square Matrices
{
	int size,size2,i,j;
	printf(" ENter a row and column\n");
	scanf("%d",&size);
	int a[size][size];
	printf(" ENter frist matrix elelment\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" ENter a size ");
	scanf("%d",&size2);
	int a2[size2][size2];
	printf(" ENter a second matrix");
	for(i=0;i<size2;i++)
	{
		for(j=0;j<size2;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	int a3[size][size],k,mul=0;
	for(i=0;i<size;i++)
	{
		mul=0;
		for(j=0;j<size;j++)
		{
			
			for(k=0;k<size;k++)
			{
				mul=mul+(a[i][k]*a2[k][j]);
			}
			a3[i][j]=mul;
		}
	}
		printf(" Display matrix ");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nDisplay second matrix\n");
	for(i=0;i<size2;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	
	printf("Result matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a3[i][j]);
		}
		printf("\n");
		
		}}	