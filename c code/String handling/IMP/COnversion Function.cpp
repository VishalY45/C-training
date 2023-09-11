#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void charTono(char name[],int result)
{
	for(int i=0;i<result;i++)
	{
		if(name[i]==32)
		{
			printf(" ");
		}
		else
		{
			name[i]=(int)(name[i]);
			printf("%d\n",name[i]);
	       
		}
			
	}
	
}
void noTochar(int size,int no[])
{
	for(int i=0;i<size;i++)
	{
		no[i]=(char)(no[i]);
		printf("%c\t",no[i]);
	}
}
int main()
{
	int choice;
	int no;
	char name[90];
	do
	{
		printf("\n1:TO CONVERT CHAR TO NO");
		printf("\n2:TO CONVERT INT TO CHAR");
		printf("\nEnter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					_flushall();
				printf("Enter a stirng\n");
				gets(name);
				int result=strlen(name);
			   charTono(name,result);
				break;
			}
				case 2:
					{
						int size;
					printf("Enter a size\n");
					scanf("%d",&size);
					int no[size];
					printf("Enter a element\n");
					for(int i=0;i<size;i++)
					{
						scanf("%d",&no[i]);
					}
					noTochar(size,no);
				}
					break;
					default:
						printf("Wrong choice\n");
		}
		
	}while(choice!=3);
	return 0;
}