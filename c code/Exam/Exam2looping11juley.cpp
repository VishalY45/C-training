#include<Stdio.h>
int main()
/*
{
	int no,i,f=0,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	{
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0&&i!=1)
		{
			printf("%d",i);
		}
	}
}*/


//2//
/*
{
	int a=16,b=1,d=1,i=3,no;
	printf(" Enter a no");
	scanf("%d",&no);
	printf("%d\t%d\t",a,b);
	while(i<=no)
	{
		if(i%2==1)
		{
			a=a-2;
			printf("%d\t",a);
		}
		else if(i%2==0)
		
		{
			d++;
			b=d*d;
			printf("%d\t",b);
		}i++;
	}
	if(no%2==1)
	{
		printf("%d%d\t",no,a);
	}
	else
	{
			printf("%d%d\t",no,b);
	}
}*/


// 3//
/*
{
	int i,j,f1=0,f2=1,no,fib,f=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i&&f)
			{
				printf("%d",f1);
				fib=f1+f2;
				f1=f2;
				f2=fib;
				f=0;
			}
			else
			{
				printf(" ");
				f=1;
			}
		}
		printf("\n");
	}
}
*/

//4//
{
	int ch;
	printf("\n 1 for area of circkle");
	printf("\n2 for area of square");
	printf(" \n3 for area of reactangle");
	printf(" \n4 for area of tringle");
	printf("\n Enter a choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				float r,c;
				printf(" Enter a radious");
				scanf("%f",&r);
				c=3.14*r*r;
				printf(" area of circkle is %f",c);
			}
			break;
			case 2:
					{
				float side,s;
				printf(" Enter a side");
				scanf("%f",&side);
				s=side*side;
				printf(" area of square %f",s);
			}
			break;
			case 3:
				{
				float base,height,r;
				printf(" Enter a base and height");
				scanf("%f%f",&base,&height);
				r=base*height;
				printf(" area of reactangle %f",r);
			}
			break;
			case 4:		
				{
				float base,height,t;
				printf(" Enter a base height");
				scanf("%f%f",&base,&height);
				t=0.5*(base*height);
				printf(" area of tringle %f",t);
			}break;
			default:
				printf("wrong input");
			}
		}
	