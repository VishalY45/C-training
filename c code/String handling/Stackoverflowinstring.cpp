#include<stdio.h>
#include<string.h>
int main()
{
	char stack[5][90],stri[5][90];
   int top=-1,i;
  int max=sizeof(stack)/sizeof(stack[0]);
  int choice;
  do{
  	printf("\n1: for push data:-\n");
  	printf("\n2: for pop data:-\n");
  	printf("\n3: for display data:-\n");
  	printf("\n Please enter your choice:-\n");
  	scanf("%d",&choice);
  	switch(choice)
  	{
  		case 1:
  			{
			printf("\nEnter a string");
			fgets(stri[top],sizeof(stri[top]),stdin);
  			if(top==max-1)
  			{
  				printf(" Stack is overflow");
			  }
			  else
			  {
			  	top=top+1;
			  	strcpy(stack[top],stri[top]);
			  }
		}
			  break;
			  case 2:
			  	{
				  
			  	if(top==-1)
			  	{
			  		printf("Stack is underflow\n");
				  }
				  else{
				  strcpy(stack[top],stri[top]);
				  	printf("The string is deleted :-%s",stri[top]);
				  	top=top-1;
			          }
			      }
			          break;
				  case 3:
				  	{
					  
				  	for(i=top;i>=0;i--)
				  	{
				  		printf("Stack[%d]---->%s\n",i,stri[i]);
					  }
				}
					  break;
					  default:
					  	printf("your are enter a wrong choice\n");
				  
	  }
  }while(choice<=3);
}