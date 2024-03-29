#include<stdio.h>
int main()
{
	int stack[5];
	int len=sizeof(stack)/sizeof(stack[0]);
	int top=-1;
	int max=len-1;
	int value;
		int choice;
	do
	{
		printf("1:push");
		printf("2:pop");
		printf("3:view");
		printf("enter choice");
	
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			if(top==max)
			{
				printf("Stack is underflow");
			}
			else
			{
				top=top+1;
				printf("ENter value");
				scanf("%d",&value);
				stack[top]=value;
			}
			break;
			case 2:
				if(top==-1)
				{
					printf("Stack is Underflow");
				}
				else
				{
					value=stack[top];
					printf("Deleted value %d",value);
					top=top-1;
				}
			break;
			case 3:
			for(int i=top;i>=0;i--)
			{
			printf("[%d]-----%d",i,stack[i]);
			}
			break;
			default:
			printf("wrong chocice");	
		}
	}while(choice<=3);
}