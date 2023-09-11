#include<stdio.h>
int main()
//WAP to input five values in array and find max value from it without using sorting
/*
{
	int a[5],min,max,i;
	printf(" Enter a no");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" \ndisplay array\n");
	min=a[0];

	for(i=0;i<5;i++)
	{
		printf("\n a[%d]--->%d",i,a[i]);
		if(min>a[i])
		min=a[i];
		
	}
	printf("\n min value is%d",min);
	
}
*/
/*
{
	int a[5],max,i;
	printf(" Enter a no\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n display array");
	max=a[0];
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]--->%d",i,a[i]);
		if(max<a[i])
		max=a[i];
	}
	printf("\n max no is%d",max);
}
*/
//WAP to input 10 values in array and input one extra value and search in array if present then show message value not otherwise show message value not found
/*
{
	int a[10],sd,i,f=0;
	printf("\n Enter a 10 values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Entr a search digit");
	
scanf("%d",&sd);
printf("\n display array");

for(i=0;i<10;i++)
{
	printf("\n a[%d]--->%d",i,a[i]);

	if(a[i]==sd)
	{
		f=1;
		break;
	}
	
}
if(f==1)
{
	printf(" \nno is found");
}
else
{
	printf(" \nno is not found");
}
}
*/
/*
{
	int a[10],i,pos;
	printf(" enter a value");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter delete no");
	scanf("%d",&pos);
	if(pos>10+1)
	{
		printf(" deletion is not posiable");
	}
	else
	{
	
	for(i=pos-1;i<10-1;i++)
	{
		a[i]=a[i+1];
	}
}
printf("\n reselant arry\n");
for(i=0;i<10-1;i++)
{
	printf("\n a[%d]--->%d",i,a[i]);
}
		
	}*/
	
	
	
{
   int a[5]={10,20,30,40,50},i,j,k,l;
   i=j=1;

   k=a[i++];
   j=a[++i]+10;
   l=a[i+1];
   printf("\nI=%d\tJ=%d\tK=%d\tL=%d\n",i,j,k,l);
    //getch();
}

/*
{
   int a[5]={1,2,3,4,5},i,j,k,l;
   i=j=1;

   k=a[i++>>1];
   j=a[++i>>2]+10;
   l=a[i+1&1];
   printf("\nI=%d\tJ=%d\tK=%d\tL=%d\n",i,j,k,l);
    //getch();
}
*/
/*
{
   int a[5]={1,2,3,4,5},i,j,k,l;
   
    i=a[0]+a[1]*2/5;
    j=a[1]*a[2]>>2+5; 
   printf("\nI=%d\tJ=%d  \n",i,j );
   // getch();
}
*/

