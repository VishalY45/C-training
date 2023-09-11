#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void InsertAtBeg();
void Display();
void DelAtBeg();
int choice;
int main()
{
	do
	{
		printf("1:INSERT\n");
		printf("2:DISPLAY\n");
		printf("DELTETDATA\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				InsertAtBeg();
				break;
				case 2:
					Display();
					break;
					case 3:
						DelAtBeg();
						break;
						default:
							printf("Wrong choice\n");		
		}
	}while(choice!=4);
}
void InsertAtBeg()
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(node));
		printf("Enter a data\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(node));
		printf("Enter a data in Temp\n");
		scanf("%d",&temp->data);
		temp->next=head;
		head=temp;
	}
}
void Display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Data is not Present\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}
void DelAtBeg()
{
	struct node *temp;
	temp=head;
	head=head->next;
	temp->next=NULL;
	int data =temp->data;
	printf("The delete Value is:=%d",data);
	free(temp);
}
