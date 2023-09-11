#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertEnd();
void display();
int choice,data;
int main()
{
	do
	{
		printf("\n1 INSERT DATA\n");
		printf("\n2:DISPLAY DATA\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			insertEnd();
				break;
				case 2:
					display();
					break;
					default:
						printf("Wrong choice\n");
		}
	}while(choice!=3);
}
void insertEnd()
{
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(node));
		printf("Enter a data in node\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else
	{
		struct node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		struct node *temp1;
		temp1=(struct node*)malloc(sizeof(node));
		printf("Enter data in temp1\n");
		scanf("%d",&temp1->data);
		temp->next=temp1;
		temp1->next=NULL;
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nData is not present\n");
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
}