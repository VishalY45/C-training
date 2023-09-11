#include<Stdio.h>
int main()
/*
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((i<=4&&(j==5-i||j==3+i))||(i>4&&(j==i-3||j==11-i)))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}*/
/*
{
	int i,j,count=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",count);
			count++;
		}printf("\n");
	}
}*/
/*

	int i,j,f=1;
{
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(f&&(j==i||j==8-i||i==1||i==7))
			{
			
			printf("*");
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
/*
{
   int n;
   for(n = 7; n!=0; n--)
     printf("n = %d", n--);
   //getchar();
   //return 0;
}
*/
/*
{
   int i = 1;

   do
   {
      printf("%d\n", i);
      i++;
      if (i < 15)
        continue;
   } while (0);
   getchar();
   return 0;
}*/
/*
{
   int i=0;
   for(i=0; i<20; i++)
   {
     switch(i)
     {
       case 0:
         i+=5;
       case 1:
         i+=2;
       case 5:
         i+=5;
       default:              
         i+=4;
         break;
     }
     printf("%d  ", i);
   }
 
   getchar();
   return 0;
}  */

{
    int i = 3;
    printf("%d", (++i)++);
    return 0;
}

