#include<stdio.h>
int main()
/*
{
	int base,index,p=1,i=1;
	printf(" Enter a base");
	scanf("%d",&base);
	printf(" Enter a index");
	scanf("%d",&index);
	while(i<=index)
	{
		p=base*p;
		i++;
	}
	printf(" power is %d",p);
}*/

{
	float a=1,no,sum=0,i=2;
	printf(" Enter a no");
	scanf("%f",&no);
	while(i<=no)
	{
		a=1/i;
		printf("%f",a);
		sum=sum+a;
		i++;
	}
	printf("\n=%f",sum);
}

/*
{
	int no,count=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		count++;
		no=no/10;
		
	}
	printf(" count is %d",count);
}
*/

//1,4,9,16.......n
/*
{
	int i=1,no,a;
	printf(" ENter a no");
	scanf("%d",&no);
	while(i<=no)
	{
	printf("%d\t",i*i);
	i++;	
	}
}*/

//1+11+111+1111+11111........n
/*
{
int no,a,i=1;
printf(" enter a no");
scanf("%d",&no);
while(i<=no)
{
	a=a*10+1;
	printf("%d\t",a);
	i++;
	}	
}*/
/*

{
	int no,i=1,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
		sum=sum+i;	
		}
		i++;
	}
	if(sum==no)
	{
		printf(" no is perfect");
		
	}
	else
	{
		printf(" no is not perfect");
	}
}
*/
/*
{
	int no,n,sum=0,j,i;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
			
		}
		if(sum==i)
		{
			printf(" %d",i);
		}
	}
}
*/
	
	

	