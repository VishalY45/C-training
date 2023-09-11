#include<stdio.h>
#include<math.h>
int main()
//0,0,7,6,14,12,21,18, 28

{

	int a=0,b=0,no,i;
	printf(" Enter a no");
	scanf("%d",&no);
	printf("\t%d\t%d",a,b);
	for(i=3;i<=no;i++)
	{
	
	if(i%2!=0)
	{
	
	a=a+7;	
	printf("\t%d",a);
	}
	else
	{
	
		b=b+6;
			printf("\t%d",b);
	}
	
}
if(no%2!=0)
printf(" \n%d term Of %d",no,a-7);
else
printf("\n%d term of %d",no,b-6);
}

//1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 
/*
{
	int a=1,b=1,no,i;
	printf(" Enter a no");
	scanf("%d",&no);

	if(no<=30)
	{
		printf("%d%d",a,b);
	for(i=3;i<=no;i++)
	{
		if(i%2==0)
		{
			a=a*3;
			printf("\t%d",a);
		}
		else
		{
			b=b*2;
			printf("\t%d",b);
		}
	}
	if(no%2==0)
	printf(" %d term of %d",no,a);
	else
	printf("%d term of %d",no,b);
}

else
{
	printf(" no is grether then 30");
}
}
/*


//0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8 
/*
{
	int a=0,b=0,no,i;
	printf(" Enter a no");
	scanf("%d",&no);
	printf("%d%d",a,b);
	for(i=3;i<=no;i++)
	{
		if(i%2!=0)
		a=a+2;
		else
		b=b+1;
	}
	if(no%2!=0)
	printf("%d term of %d",no,a);
	else
	printf("%d term of %d",no,b);
}
*/

	//0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16,8 
	/*
	{
		int a=0,b=0,i=1,no;
		printf(" enter a no");
		scanf("%d",&no);
		printf("%d%d",a,b);
		for (i=3;i<=no;i++)
		{
			if(i%2!=0)
			{
				a=a+2;
				
			}
			else
			{
				b=b+1;
			}
		}
		if(no%2!=0)
		{
			printf(" %d term of %d ",no,a);
			
		}
		else
		{
			printf("%d term is %d",no,b);
		}
	}
	*/
	
	
