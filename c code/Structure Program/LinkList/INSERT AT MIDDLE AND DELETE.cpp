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
void delAtMid();
int choice,f=0,value;
int main()
{
	do
	{
		printf("1:INSERT\n");
		printf("2:DISPALY\n");
		printf("3:DELETE VALUE\n");
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
					case 3:
						delAtMid();
						break;
						default:
							printf("Enter Wrong choice\n");
		}
	}while(choice!=4);
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
		temp=(struct node *)malloc(sizeof(node));
		printf("Enter a data\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head->next=temp;
	}
	else
	{
		struct node *temp1;
		printf("Enter search value\n");
		scanf("%d",&value);
		struct node *temp;
		temp=head;
		while(temp!=NULL)
		{
			if(temp->data==value)
			{
				f=1;
				temp1=temp->next;
				break;
				
			}
			temp=temp->next;
		}
		if(f==1)
		{
			struct node *temp3;
			temp3=(struct node*)malloc(sizeof(node));
			printf("Enter a mid value\n");
			scanf("%d",&temp3->data);
			temp3->next=temp1;
			temp->next=temp3;
		}
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Data is not present\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void delAtMid()
{
	if(head==NULL)
	{
		printf("Data is not presennt\n");
	}	
     else
     {
	struct node *temp,*temp1,*temp2,*temp3;
	int value,f=0;
	printf("Enter a value\n");
	scanf("%d",&value);
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==value)
		{
			f=1;
			temp1=temp;
		temp2=temp1->next;
		break;
		}
		temp3=temp;
		
		temp=temp->next;
	}
	if(f==1)
	{
		temp3->next=temp2;
		temp1->next=NULL;
		int data =temp->data;
		printf("\nThe delete value is %d",data);
		free(temp1);
	}
	printf("\n");

}}