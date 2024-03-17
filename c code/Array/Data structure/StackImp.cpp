#include<stdio.h>
int size=5;
int top=-1,value;
	int a[5];
void push()
{

	int max=sizeof(a)/sizeof(a[0]);

	if(top==max-1)
	{
		printf("\nStack Is Overflow");
	}
	top=top+1;
	printf("Enter a value");
	scanf("%d",&value);
	a[top]=value;
	
}
void pop()
{
   if(top==-1)
   {
   	printf("\nStack is underflow\n");
	   }
	 a[top]=value;
	   printf("\nThe Value Is Deleted %d",value);
	   top=top-1;	
}
void Display()
{
	for(int i=top;i>=0;--i)
	{
		printf("\na[%d]--->%d",i,a[i]);
	}
}
int main()
{
	int choice;
	do{
		printf("\n\n1:for Insert Data");
		printf("\n\n2:For Delete Data");
		printf("\n\n3:For View Data");
		printf("\n\nEnter a choice:-");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
				case 2:
					pop();
					break;
					case 3:
						Display();
						break;
						default:
							printf("Wrong choice");
					}							
						
		}while(choice!=4);
	}
	
