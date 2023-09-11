#include<stdio.h>
#include<stdlib.h>
#include "insert.h"
#include "view.h"
#include "search.h"
int main()
{
    //struct student s1;
	int choice;
	do{
		printf("\n1:INSERT");
		printf("\n2:VIEW");
		printf("\n3:SEARCH");
		printf("\n:Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				struct student *s1;
				int size;
				printf("\nEnter a size\n");
				scanf("%d",&size);
				s1=(struct student*)malloc(sizeof(student)*size);
				printf("\nEnter student id name class\n");
				for(int i=0;i<size;i++)
				{
					scanf("%s%d%d",&s1[i].name,&s1[i].rollno,&s1[i].clas);
					insert(s1[i]);
				}
				break;
				case 2:
					view();
					break;
					case 3:
						{
						
						int nId;
						printf("Enter a id\n");
						scanf("%d",&nId);
						int result=search(nId);
						if(result)
						{
							printf("\nRoll no Is found");
						}
						else
						{
							printf("Roll NO is not Found\n");
						}
						break;
					}
						default:	`
							printf("Exit");
		}
	}while(choice!=4);
}