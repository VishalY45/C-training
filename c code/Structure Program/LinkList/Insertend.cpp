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
	do
	{
		printf("\n1:for insert\n");
		printf("\n2:for display\n");
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
						printf("Enter wrong choice\n");
		}
	}while(choice!=3);
}
void insert()
{
	if(head==NULL)
	{
	  head=(struct node*)malloc(sizeof(node));
	  printf("Entr data in node\n");
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
		printf("Enter a data in stack temp1\n");
		temp1=(struct node*)malloc(sizeof(node));
		scanf("%d",&temp1->data);
		temp->next=temp1;
		temp1->next=NULL;
	}
}
void display()
{
	struct node *temp;
	
	if(head==NULL)
	printf("\ndata is not present");
	else
	{temp=head;
	   while(temp!=NULL)
	   {
	   	//temp=temp->data;
	   	printf("%d\t",temp->data);
	   	temp=temp->next;
	   }
	}
	
}
	