//	1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…..
{
	int no,a1=0,a2=1,a3,b=2,i=1,f;
	printf(" enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		f=0;
	  if(i%2!=0)
	  
	  {
	  int i=1;
	while(i<=no)
	{
		a3=a1+a2;
		printf("%d\t",a3);
		a1=a2;
		a2=a3;
		f=1;
		i++;
	}
}
else if(i%2==0)
{

int i=1;
while(i<no)
{
	f=0;
	
if(no%i==0)
{
	f=1;
	break;
	}	
	printf("%d\t ",b);
	i++;
	
}
}
}
if(no%2!=0)
{
	printf("\n%d term is%d\t ",no,a3);
}
else
{
	printf("\n %d term is %d\t",no,b);
}

}
*/



// 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…

{
	int a=1,b=2,no,i;
	printf("Enter no ");
	scanf("%d",&no);
	for(i=3;i<=no;i++)
	{if(i%2!=0)
	{
	

	printf("\t%d",a);
}
	else
	{
	
	b=b+2;

	printf("\t%d",b);
}
		}
		if(no%2==0)
		printf("%d term is %d",no,a);
		else
		printf("%d term is %d",no,b);
	}
	
	