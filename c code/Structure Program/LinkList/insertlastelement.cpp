#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertAtEnd();
void display();
int choice,data;
int main(){
	do{
		printf("1:INSERT\n");
		printf("2:DISPLAY\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insertAtEnd();
			break;
			case 2:
				display();
		    break;
		    default:
		    	printf("Wrong choice\n");
		}	
		
	}while(choice!=3);
 
	return 0;
}
  void insertAtEnd()
   {
   	if(head==NULL){
   		head=(struct Node*)malloc(sizeof(Node));
   		printf("\nEnter data in node\n");
   		scanf("%d",&head->data);
   		head->next=NULL;
	   }
	   else{
	   	struct Node *temp;
	   	temp =head;
	   	while(temp->next!=NULL){
	   		temp=temp->next;
		   }
		struct Node *temp1;
		printf("\nEnter data in new node\n");
		temp1=(struct Node*)malloc(sizeof(Node));
		scanf("%d",&temp1->data);
		temp->next=temp1;
		temp1->next=NULL;
	   }
   }
   void display(){
   	  struct Node *temp;
   	  if(head==NULL){
   	  	printf("DAta not present in linked list");
		 }
		 else{
		 	temp=head;
		 	while(temp!=NULL){
		 		printf("%d\t",temp->data);
		 		temp=temp->next;
			 }
		 }
   }
