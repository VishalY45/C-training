#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertAtEnd();
void display();
void delAtEnd();
int choice;
int main()
{
	do
	{
		printf("1:INSERT\n");
		printf("2:DISPLAY\n");
		printf("3:DELETE\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertAtEnd();
				break;
				case 2:
					display();
					break;
					case 3:
						delAtEnd();
						break;
						default:
							printf("ENter a Wrong choice\n");
		}
	}while(choice!=4);
}
void insertAtEnd()
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(node));
		printf("Enter a dada\n");
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
		printf("Enter a data in Temp\n");
		scanf("%d",&temp1->data);
		temp1->next=NULL;
		temp->next=temp1;
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Data Is Not Presnet\n");
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
void delAtEnd()
{
	if(head==NULL)
	{
		printf("Data is No Present\n");
	}
	else
	{
		struct node *temp,*temp1;
		temp=head;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=NULL;
	 int data=temp->data;
	 printf("The delete data is%d",data);
	 free(temp);	
	}
}