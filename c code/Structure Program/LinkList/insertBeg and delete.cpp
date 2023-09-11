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
void delAtBeg();
void delAtEnd();
void insertAtMid();
int choice;
int main()
{
	do
	{
		printf("1:insert\n");
		printf("2:display\n");
		printf("3:Delete\n");
		printf("4:deleteEnd\n");
		printf("5:DeleteMId\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
				case 2:
					display();
					break;
					case 3:
						delAtBeg();
						break;
						case 4:
							delAtEnd();
							break;
							case 5:
								insertAtMid();
								break;
					deafult:
						printf("Wrong choice");
		}
	}while(choice!=6);
}
void insert()
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(node));
		printf("Enter a data");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(node));
		printf("ENter a data\n");
		scanf("%d",&temp->data);//20
		temp->next=head;
		head=temp;
		}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("data not presnt\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)//102 103
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}
void delAtBeg()
{
	struct node *temp;
	temp=head;// 20 30
	head=temp->next;//30
//	temp->next=NULL;//30
	int data=temp->data;
	printf("The Delete value id %d",data);
	free(temp);
}
void delAtEnd()
{
	struct node *temp,*temp1;
	temp=head;
	while(temp->next!=NULL) //10 20 30
	{ 
	   temp1=temp;//20
		temp=temp->next;//30
	}
	temp1->next=NULL;
	int data=temp->data;
	printf("\nThe value is deleted %d\t",data);
	free(temp);
}
void insertAtMid()
{
	if(head==NULL)
	{
		printf("The data is not present\n");
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
}

}