#include<stdio.h>
int main()
/*
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=27;j++)
		{
			if(j>=10-i&&j<=28-i)
			{
				printf("*");
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
{int i,j;
for(i=1;i<=20;i++)
{
	for(j=1;j<=20;j++)
	{
		if(j==i||j==21-i)
		{
			printf("*");
			
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");

}}
*/
/*
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		printf("\t\t");
		for(j=1;j<=7;j++)
		{
			if((i<=3&&(j>=5-i&&j<=3+i))||(i>=4&&(j>=i-3&&j<=11-i)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
*/

/*                *
   *             *
     *         *
       *     *
          *
          */
          /*
          {
          	int i,j;
          	for(i=1;i<=5;i++)
          	{
          		for(j=1;j<=9;j++)
          		{
          			if(j==i||j==10-i)
          			{
          				printf("v");
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
		 
		 /*
		  A
       BAB
     CBABC
  DCBABCD
EDCBABCDE*/
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch=64+i;
		for(j=1;j<=9;j++)
		{
			if(j>=10-(2*i-1))
			{
				printf("%c",ch);
			if	(i<=j)
			ch++;
			else
			ch--;
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}