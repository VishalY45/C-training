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
				printf("%d\t",count);
				if(j<i)
				count++;
				else
				count--;
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
				printf("%c\t",ch);
				if(j<i)
				ch++;
				else
				ch--;
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
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",count);
				if(j<5)
				count++;
				else
				count--;
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
{
	int i,j,count=0,f=1;
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
/*
{  int i;
   i=1;
  for(;i<=5;i=>>1)
  {   printf("Good Morning\n");
  }
  //getch();
}
*/
/*
  {
    int i;
     i=1;
     while(i<=10)
     {
       printf("%d\n",i++);
     }
 }

*/
/*
{
    int i,j;
     j=10;
     i=1;
     while(i++ && --j)
     {
       printf("Hello");
     }
}*/
/*
  {
    int i,j;
     j=10;
     i=1;
     while(i++ & --j)
     {
       printf("Hello");
     }
}
*/
  {  int i,j;
    i=j=1;
    for(;j;printf("I=%d\tJ=%d\n",i,j)){
       j=i++<=5;
     }
  // getch();
  }
