#include<stdio.h>
int main(){
	int choice;
	int stack[5],value;
	int MAX;
	MAX=sizeof(stack)/sizeof(stack[0]);
	int top=-1;
	do{
	  printf("1:PUSH DATA IN STACK\n");
	  printf("2:POP DATA FROM STACK\n");
	  printf("3:DISPLAY DATA\n");
	  printf("\nEnter your choice\n");
	  scanf("%d",&choice);
	   switch(choice){
	   	  case 1:
	   	  	printf("Enter data in stack\n");
	   	  	scanf("%d",&value);
	   	  	if(top==MAX-1){
	   	  	   printf("Stack is overflow\n");	
			 }
			 else{
			 	top = top+1;
			 	stack[top]=value;
			 }
	   	   break;
	   	   case 2:
	   	   	if(top==-1){
	   	   	  printf("Stack is underflow");	
			 }
			 else{
			 	value=stack[top];
			 	printf("\nDeleted value is %d\n",value);
			 	top = top-1;
			 }
	   	   break;
	   	   case 3:
	   	   	for(int i=top;i>=0;i--){
	   	   		printf("stack[%d]---->%d\n",i,stack[i]);
			 }
		   break;
		  default:
		   printf("Wrong choice\n");	  		
	   }
	}while(choice<=3); //infinite loop
	return 0;
}
