#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertAtbeg();
void InsertAtend();
void InsertAtmid();
void delAtbeg();
void delAtend();
void delAtmid();
void Display();
void Search();
int choice;
int main()
{
	do
	{
	printf("1:INSERTATBEG\n");
	printf("2:INSERTATEND\n");
	printf("3:INSERTATMID\n");
	printf("4:DELATBEG\n");
	printf("5:DELATEND\n");
	printf("6:DELATMID\n");
	printf("7:DISPLAY\n");
	printf("8:SEARCH\n");
	printf("Enter a choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			insertAtbeg();
			break;
			case 2:
				InsertAtend();
				break;
				case 3:
					InsertAtmid();
					break;
					case 4:
						delAtbeg();
						break;
						case 5:
							delAtend();
							break;
							case 6:
								delAtmid();
								break;
								case 7:
									Display();
									break;
									case 8:
										Search();
										break;
										default:
											printf("Wrong choice\n");
								
			
	}
    }while(choice!=10);
}
void insertAtbeg()
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
		temp=(struct node *)malloc(sizeof(node));
		printf("Enter a data\n");
		scanf("%d",&temp->data);
		temp->next=head;
		head=temp;
	}
}
void InsertAtend()
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
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		struct node *temp1;
		temp1=(struct node*)malloc(sizeof(node));
		printf("Enter a data\n");
		scanf("%d",&temp1->data);
		temp->next=temp1;
	temp1->next=NULL;
	}
}
void InsertAtmid()
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
		printf("Enter a data\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head->next=temp;
	}
	else
	{
	  struct node *tempnext;
	  int value,flag=0;
	  printf("Enter a value while for search\n");
	  scanf("%d",&value);
	  struct node *temp;
	  temp=head;
	  while(temp!=NULL)
	  {
	  	if(temp->data==value)
	  	{
	  		flag=1;
	  		tempnext=temp->next;
	  		break;
		  }
		  temp=temp->next;
	  }
	  if(flag)
	  {
	  	struct node *temp2;
	  	temp2=(struct node *)malloc(sizeof(node));
	  	printf("Enter a data\n");
	  	scanf("%d",&temp2->data);
	  	temp->next=temp2;
	  	temp2->next=tempnext;
	  
	  }	
	}
}
void delAtbeg()
{
	if(head==NULL)
	{
		printf("Data is Not found\n");
	}
	else
	{
		struct node *temp;
		temp=head;
		head=temp->next;
		//temp->next=NULL;
		int data =temp->data;
		printf("The value is delete %d\n",data);
		free(temp);
	}
}
void delAtend()
{
	if(head==NULL)
	{
		printf("Sorry data is not present\n");
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
		printf("Last deleted value:=%d",data);
		free(temp);
	}
}
void delAtmid()
{
	if(head==NULL)
	{
		printf("Data is not found\n");
	}
	else
	{
		struct node *temp,*temp1,*temp2,*temp3;
		temp=head;
		int value,flag=0;
		printf("Enter a value which we want delete\n");
		scanf("%d",&value);
		for(int i=0;i<=value;i++)
		{
			if(temp->next==NULL)
			{
				flag=1;
				temp1=temp;
				temp3=temp1;
				break;
			}
			if(i==value)
			{
				temp1=temp;
				flag=1;
				temp3=temp->next;
				break;
			}
			temp2=temp;
			temp=temp->next;
		}
		if(flag)
		{
			temp2->next=temp3;
			temp1->next=NULL;
			printf("The value is deleted%d",temp->data);
			free(temp1);
		}
	}
}
void Search()
{
	if(head==NULL)
	{
		printf("Data Is Not Found\n");
	}
	else
	{
		struct node *temp;
		temp=head;
		int value,f=0;
		printf("Enter a value which we want to serach\n");
		scanf("%d",&value);
		while(temp!=NULL)
		{
			if(temp->data==value)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			printf("Data Is Found\n");
		}
		else
		{
			printf("Data is not Found\n");
		}
	}
}
void Display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Data is Not present\n");
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
