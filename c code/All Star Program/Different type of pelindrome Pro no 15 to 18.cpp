#include<stdio.h>
int main()
/*
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%d",count);
				if(j>=i)
				{
					count--;
				}
				else
				{
					count++;
				}
			}
		}printf("\n");
	}
}
*/
// 15)
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%c",ch);
				if(j>=i)
				{
					ch--;
				}
				else
				{
					ch++;
				}
			}
		}
		printf("\n");
	}
}
*/

//16)
/*
{
	int i,j,ch;
	for(i=1;i<=5;i++)
	{ ch=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",ch);
				if(j>=5)
				{
					ch--;
				}
				else
				{
					ch++;
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}*/
/*
//17)
{
	int i,j,count=i,f=1;;
	for(i=1;i<=5;i++)
	{
		count=i;
		for(j=1;j<=17;j++)
		{
			if(j>=10-i&&j<=8+i&&f==1)
			{
				printf("%d",count);
				f=0;
			}
			else
			{
				printf("*");
				f=1;
			}
		}
		printf("\n");
	}
}
*/