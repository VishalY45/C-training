#include<Stdio.h>
int value,choice,top=-1;
int maxx=5;
int stack[5];
//maxx=sizeof(stack)/sizeof(stack[0]);
void push()
{
	
	if(top==maxx-1)
	{
		printf("\n Stack is overflow");
	}
	else
	{
		top=top+1;
		printf("\n Enter a value\n");
		scanf("%d",&value);
		stack[top]=value;
	}
}
void pop(){
	if(top==-1)
	{
		printf("\n Stack is underflow\n");
	}
	else
	{
		stack[top]=value;
		printf("\n Deleted value is %d",value);
		top=top-1;
	}	
}
void display()
{
	for(int i=top;i>=0;--i)
	{
		printf("\n Stack[%d]--->%d",i,stack[i]);
	}
}
int main()
{
	do{
		printf("\n1 for Push data\n");
		printf("\n2 for Pop data\n");
	    printf("\n3 for Display data\n");
	    printf("\nEnter a choice\n");
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
	    				display();
	    				break;
	    				default:
	    					printf(" Enter a Wrong choice");
		}
	}while(choice<=3);
}