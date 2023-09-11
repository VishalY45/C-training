#include<stdio.h>
int main()
{
	int a[5],i,j,top,choice,value;
	int MAX=sizeof(a)/sizeof(a[0]);
	top=-1;
	do{
		printf(" 1: push method\n");
		printf(" 2: pop method\n");
		printf(" 3: display method\n");
		printf("\n Enter a choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf(" Enter a value\n");
				scanf("%d",&value);
				if(top==MAX-1)
				{
					printf("Stack is overflow");
				}
				else
				{
					top=top+1;
					a[top]=value;
					
				}
				break;
				case 2:
					if(top==-1)
					{
						printf(" Stack is underflow\n");
					}
					else
					{
					   value=a[top];
					
						printf(" Deleted value is %d\n",value);
							top=top-1;
					}
					break;
					case 3:
						for(i=top;i>=0;i--)
						{
							printf("a[%d]--->%d\n",i,a[i]);
						}
						break;
						default:
							printf(" ENter a wrong choice");
						}
		}while(choice<=3);
	
	
}