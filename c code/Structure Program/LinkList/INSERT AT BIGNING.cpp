#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBig();
void display();
int choice;
int main()
{
	do
	{
		printf("1:INSERT\n");
		printf("2:DISPLAY\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertBig();
				break;
				case 2:
					display();
					break;
					default:
						printf("Wrong choice\n");
		}
	}while(choice!=3);
}
void insertBig()
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(node));
		printf("Enter Data In Node\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
     else
     {
     	struct node *temp;
     	temp=(struct node*)malloc(sizeof(node));
     	printf("Enter Data In Second Node\n");
     	scanf("%d",&temp->data);
     	temp->next=head;
     	head=temp;
	 }
}
void display()
{
	if(head==NULL)
	{
		printf("\nData is not present in node\n");
	}
	else
	{
		struct node *temp;
		temp=head;
		while(temp!=NULL)
		{
			//int data=temp->data;
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}