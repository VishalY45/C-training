#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct logi
{
	int login;
	char password[90];
};
//struct logi *l;
int main()
{
	int choice;
	do
	{
		printf("LOGIN\n");
		printf("\n2:Create Login\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				
				int loginn,size;
				char passwordd[90];
				_flushall();
				printf("Enter a password\n");
					printf("____________________\n");
					gets(passwordd);
			
			
					printf("\nEnter a pass");
				scanf("%d",&loginn);
	            
				int f=0;
				FILE *lgn;
				lgn=fopen("login.txt","r");
				struct logi temp;
				//=(struct logi*)malloc(sizeof(struct logi));
				while(fscanf(lgn,"%s%d",&temp.password,&temp.login)!=-1)
				{
					if(temp.login==loginn&&strcmp(temp.password,passwordd)==0)
					{
						
							f=1;
							break;
					}
					
				}
				if(f)
				{
					printf("login");
				}
				else
				{
					printf("unsecces");
				}
				fclose(lgn);
			}
			break;
				
			case 2:
				
				int login;
				char password[90];
			//	struct logi *temp2;
				printf("Enter a password");
				_flushall();
				gets(password);
				printf("Enter a id");
				scanf("%d",&login);
				FILE *lgn;
			    
				//temp2=(struct logi*)malloc(sizeof(struct logi));
				lgn=fopen("login.txt","a");
				fprintf(lgn,"%s\t%d\n",password,login);
				fclose(lgn);
				printf("Login Succesfully");
				break;
		}
	}while(choice!=3);
}