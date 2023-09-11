
#include<stdio.h>
#include<stdlib.h>
struct Node 
{  int data;
   struct Node *next;
};
struct Node *head=NULL;
void insert();
void display();
void delNodeAtBeg();
void deleteAtEnd();
void delNodeAtMiddle();
int choice,data;
int main(){
	do{
		printf("\n1:INSERT\n");
		printf("2:DISPLAY\n");
		printf("3:DELETE AT BEG\n");
		printf("4:DELETE AT END\n");
		printf("5:DELETE AT MIDDLE\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			 case 1:
			 	insert();
			  break;
			 case 2:
			 	display();
			 break;
			 case 3:
			 	delNodeAtBeg();
			 break;
			 case 4:
			 deleteAtEnd();
			 break;
			 case 5:
			   delNodeAtMiddle();
			   break;
			 default:
			 	printf("Wrong choice\n");
			 		
		}
	}while(choice!=6);
	
	return 0;
}
void insert(){
	
	if(head==NULL){
		head=(struct Node*)malloc(sizeof(Node));
		printf("\nEnter data in node\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else{
		struct Node  *temp;
		temp=(struct Node *)malloc(sizeof(Node));
		printf("\nEnter data in temporary node\n");
		scanf("%d",&temp->data);
		temp->next=head;
		head=temp;
	}
}
void display(){
	if(head==NULL){
		printf("Data not present in linked list");
	}
	else{
		struct Node *temp;
		temp=head;
		while(temp!=NULL){
			int data=temp->data;
			printf("%d\t",data);
			temp=temp->next;
		}
	}
}
void delNodeAtBeg(){
	if(head==NULL){
		printf("No node present in linked list");
	}
	else{
		struct Node *temp;
		temp=head;
		head=head->next;
		temp->next=NULL;
		int data=temp->data;
		printf("deleted node is %d\n",data);
		free(temp);
	}
}

void deleteAtEnd(){
	if(head==NULL){
		printf("No node found");
	}
	else{
		struct Node *temp,*temp1;
		temp=head;
		while(temp->next!=NULL){
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=NULL;
		int data=temp->data;
		printf("\nLast Deleted node %d\n",data);
		free(temp);
	}
}
void delNodeAtMiddle(){
	if(head==NULL){
		printf("No node found for deletion\n");
	}
	else{
		struct Node *temp,*temp1,*temp2,*temp3;
		temp=head;
		int value;
		printf("\nEnter value for search and delete node\n");
		scanf("%d",&value);
		int flag=0;
		while(temp!=NULL){
			if(temp->data==value){
				temp1=temp;
				temp2=temp1->next;
				flag=1;
				break;
			}
			temp3=temp;
			temp=temp->next;
		}
		if(flag){
			temp3->next=temp2;
			temp1->next=NULL;
			int data=temp1->data;
			printf("\nDelete node is %d\n",data);
			free(temp1);
			 
		}
		else{
			printf("Node not search\n");
		}
	}
}
