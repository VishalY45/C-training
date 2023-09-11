#include<stdio.h>
int main()
{
	int choice,value;
	int top=-1;
	 int max;
	 int stack[5];
	 max=sizeof(stack)/sizeof(stack[0]);
	 do
	 {
	 	printf("\n 1 For Push data\n");
	 	printf("\n 2 For Pop data\n");
	 	printf("\n 3 For dislay data\n");
	 	printf("\n");
	 	printf("\nEnter a choice\n");
	 	scanf("%d",&choice);
	 	switch(choice)
	 	{
	 		case 1:
	 			if(top==max-1)
	 			{
	 				printf("\nStack is overflow\n");
				 }
				 else
				 {
				 	top=top+1;
				 	printf("\nEnter a value\n");
				 	scanf("%d",&value);
				 	stack[top]=value;
				 }
				 break;
				 case 2:
				 	if(top==-1)
				 	{
				 		printf("\nStack is underflow\n");
					 }
					 else
					 {
					 	stack[top]=value;
					 	printf("\nDeleted value is %d",value);
					 	top=top-1;
					 }
					 break;
					 case 3:
					 	for(int i=top;i>=0;--i)
					 	{
					 		printf("\nstack[%d]--->%d\n",i,stack[i]);
						 }
						 break;
						 default:
						 	printf(" Enter a wrong choice\n");
		 }
		 }while(choice<=3);
		 
	 
}
