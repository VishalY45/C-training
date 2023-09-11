#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertAtBeg();
void display();
void deleteBeg();
int choice;
int main()
{
	do
	{
		printf("\n1:Insret");
		printf("\n2:Display");
		printf("\n3:delte");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertAtBeg();
				break;
				case 2:
					display();
					break;
					case 3:
						deleteBeg();
						break;
						default:
							printf("Wrong choice\n");
		}
	}while(choice!=4);
}
void insertAtBeg()
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
		printf("Enter a data\n");
		scanf("%d",&temp->data);
		temp->next=head;
		head=temp;
	}
}
void deleteBeg()
{
	struct node *temp;
     temp=head;
     if(head==NULL)
     {
     	printf("Data Is Not Present For Delete\n");
	 }
	 else
	 {
	 	head=temp->next;
	 	//temp->next=NULL;
	 	printf("%d",temp->data);
	 	free(temp);
	 }
	
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("There is no data\n");
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