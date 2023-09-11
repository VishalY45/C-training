#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char stack[5][90];
	int top=-1,i,count=0;
	char max=sizeof(stack)/sizeof(stack[0]);
	char stri[5][90];
//	char max2=sizeof(stri)/sizeof(stri[0]);
	int choice;
	do{
		printf("\n 1: for insert data\n");
		printf("\n2 for pop data\n");
		printf("\n3 for display data\n");
		printf("\nEnter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf(" Enter a string\n");
				//fgets(stri[count],sizeof(stri[count]),stdin);
				//gets();
			scanf("%s",stri[count]);
			count++;
				if(top==max-1)
				{
					printf(" Stack of string is overflow\n");
				}
				else
				{
					top=top+1;
					strcpy(stack[top],stri[top]);
				}
				break;
			
				case 2:
					if(top==-1)
					{
						printf(" Stack of string is underflow\n");
					}
					else
					{
						strcpy(stack[top],stri[top]);
						printf(" The String is deleted %s",stri[top]);
						top=top-1;
					}
					break;
					case 3:
						for(i=top;i>=0;i--)
						{
							printf("Satck[%d]---%s\n",i,stri[i]);
						}
						break;
						default:
							printf(" Wrong Choice");
			}	
}while(choice<=3);
}