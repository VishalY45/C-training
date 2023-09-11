#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert();
void display();
int choice,data;
int main()
{

do{
	printf("\n1:insert data\n");
	printf("\n2:Dispaly data\n");
	printf("\nEnter a choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			insert();
			break;
			case 2:
				display();
				break;
				default:
					printf("\nEnter wrong choice\n");
				}
			}while(choice!=3);
			return 0;
		}
		void insert()
		{
			if(head==NULL)
			{
				head=(struct node*)malloc(sizeof(node));
				printf("\nEnter a data in node\n");
				scanf("%d",&head->data);
				head->next=NULL;
			}
			else
			{
				struct node *temp;
				temp=(struct node *)malloc(sizeof(node));
				printf("\nEnter data in temporary node\n");
				scanf("%d",&temp->data);
				temp->next=head;
				head=temp;
			}
		}
		void display()
		{
			if(head==NULL)
			{
				printf("\nData not present in linked list\n");
			}
			else
			{
				struct node *temp;
				temp=head;
				while(temp!=NULL)
				{
					int data=temp->data;
					printf("%d\t",data);
					temp=temp->next;
				}
			}
		}

