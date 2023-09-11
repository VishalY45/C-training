#include<stdio.h>
int main()
/*
{
	int a[3][3],sum=0,i,j;
	printf(" Enter a 3*3 element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf(" The matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%9d\t",a[i][j]);
			//	printf("\n");
		}
		printf("\n");
	}
	printf(" sum is:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("%d",sum);
}
*/

//soham addition
 {
    int a[3][3] ,i,j,sum,sum1=0;
    printf("Enter value for array");
     for (int i= 0; i < 3; i++) {
        for (int j = 0; j <3; j++) {
            
              //  
                scanf("%d", &a[i][j]);
            }
        }
    
            
             for (int i= 0; i <3; i++) {
             	sum=0;
                for (int j = 0; j <3; j++) {
                  
                printf(" value of a[%d][%d] %d:\n ",i,j,a[i][j]);
            sum=sum+a[i][j];
          
        }
        sum1=sum1+sum;
          printf(" sum of all %d\n ",sum);
    }
      printf(" sum of all %d \n",sum1);
}
/*
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf(" Enter a frist matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		scanf("%d",&a[i][j]);
	}
	}
	printf("Enter element of second matrix\n");
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
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf(" after addition matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%9d",c[i][j]);
		}
		printf("\n");
	}
}*/
/*{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf(" Enter a frist matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		scanf("%d",&a[i][j]);
	}
	}
	printf("Enter element of second matrix\n");
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
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	printf(" after multliplication matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%9d",c[i][j]);
		}
		printf("\n");
	}
}
*/
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
