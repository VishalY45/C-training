#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int choice,i,size,top=-1,len,count=0;
char ch[50][90];
char arr[5][90];
void push(int size);
void pop(int size);
void display(int size);
int main()
{
	printf("Enter size of aarray : ");
	scanf("%d",&size);
	arr[size];
		len=sizeof(arr)/sizeof(arr[0]);
	do{
		printf("\n1 : Push : ");
		printf("\n2 : pop : ");
		printf("\n3 : Display : ");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(size);
			break;
			case 2:
				pop(size);
			break;
			case 3:
				display(size);
			break;
			default:
				printf("Wrong choice : ");
		}
	}while(choice!=4);
}
void push(int size)
{
	printf("\nEnter string : ");
	scanf("%s",&ch[count]);
	count++;
	if(top==len-1)
	{
		printf("\nStack is Overflow : ");
	}
	else
	{
	top=top+1;
	strcpy(arr[top],ch[top]);

}
}
void pop(int size)
{
					if(top==-1)
					{
						printf(" Stack of string is underflow\n");
					}
					else
					{
						strcpy(arr[top],ch[top]);
						printf(" The String is deleted %s",ch[top]);
						top=top-1;
					}
}
void display(int size)
{
	for(i=top;i>=0;i--)
	{
		printf("arr[%d]--->%s\n",i,ch[i]);
	}
}