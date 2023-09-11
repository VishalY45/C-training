#include<Stdio.h>
int main()
/*
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		count=i;
		for(j=1;j<=5;j++)
		{
			if(j<=5)
			{
				printf("%d\t",count);
			
			}
			else
			{
			printf(" ");
		}
		}printf("\n");
	}
}
*/


// 2)
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch=64+i;
		for(j=1;j<=5;j++)
		{
			if(j<=5)
			{
				printf("%c\t",ch);
			
			}
			else
			{
			printf(" ");
		}
		}printf("\n");
	}
}
*/

//3)

{
	int i,j,count;
	for(i=1;i<=5;i++)
	{
	//	count=6-i;
		for(j=1;j<=5;j++)
		{
			count=6-i;
			if(j<=5)
			{
				count=count*j;
				printf("%d\t",count);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


//4)
/*
{
	int i,j;
	char ch=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=5)
			{
				printf("%c\t",ch);
				ch++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

// 5)
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch=64+i;
		for(j=1;j<=5;j++)
		{
			if(j<=5)
			{
				printf("%c\t",ch);
				ch++;
			}
			else
			{
				printf(" ");
			}
			}printf("\n");
		}
	}
	*/
	

