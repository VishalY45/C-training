#include<stdio.h>
int main()
{
	int choice,a[5],value;
	int MAX,top;
	MAX=sizeof(a)/sizeof(a[0]);
	top=-1;
	do
	{
		printf("1: Push data on stack\n");
		printf("2: Pop data on stack\n");
		printf("3: Display data on stack\n");
		
		printf(" \nEnter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf(" Enter a value");
				scanf("%d",&value);
				if(top==MAX-1)
				{
					printf(" stack is overflow\n");
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
						printf(" stack is underflow\n");
					}
					else
					{
						value=a[top];
						printf(" deleted value is %d\n",value);
						top=top-1;
					}
					break;
					case 3:
						for(int i=top;i>=0;i--)
						{
							printf("a[%d]--->%d\n",i,a[i]);
						}
						break;
						default:
							printf(" Wrong choice\n");
		}
		}while(choice<=3);
	
}