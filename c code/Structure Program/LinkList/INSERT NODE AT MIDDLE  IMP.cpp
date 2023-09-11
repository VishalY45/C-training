#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertMid();
void display();
int choice,value,f=0;
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
				insertMid();
				break;
				case 2:
					display();
					break;
					default:
					printf("Wrong choice\n");
		}
	}while(choice!=3);
}
void insertMid()
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(node));
		printf("Enter a data\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else if(head->next==NULL)
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(node));
		printf("Enter a data in temp\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head->next=temp;
	}
	else
	{
		struct node *nexttemp;
		printf("Enter a Search value\n");
		scanf("%d",&value);
		struct node *temp;
		temp=head;
		while(temp!=NULL)
		{
			if(temp->data==value)
			{
				f=1;
				nexttemp=temp->next;
				break;
			}
			temp=temp->next;
		}
		if(f)
		{
			struct node *temp1;
			temp1=(struct node*)malloc(sizeof(node));
			printf("Enter middle data\n");
			scanf("%d",&temp1->data);
			temp1->next=nexttemp;
			temp->next=temp1;
		}
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Data is Not Present\n");
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