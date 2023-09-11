#include<stdio.h>
#include "saveproduct.h"
#include "GetSearch.h"
#include "View.h"
#include<stdlib.h>
int main()
{
	int choice,pid;
	struct product p;
	do
	{
		printf("\n1:INSERT");
		printf("\n2:VIEW");
		printf("\n3:SEARCH");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				_flushall();
			    struct product *p;
			    int size;
			    printf("Enter size\n");
			    scanf("%d",&size);
			    p=(struct product*)malloc(sizeof(product)*size);
				printf("Enter name id and price\n");
				for(int i=0;i<size;i++)
				{
				scanf("%s%d%d",&p[i].name,&p[i].id,&p[i].price);
				insert(p[i]);
			}
			
				break;
				   case 2:
				   	View();
				   	break;
					case 3:
						printf("Enter a search id\n");
						scanf("%d",&pid);
			           	int result=GetSearch(pid);
			           	if(result)
			           	{
			           		printf("Id found\n");
						   }
						   else
						   {
						   	printf("Id not Foound");
						   }
			           	break;
						
		}
	}while(choice!=4);
}