#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "mainFile.h"
struct Login
{
	int UserId;
	char Password[90];
};
int main(){
	int choice;
	do
	{
		printf("\n1:Login:-");
		printf("\n2:Create Login:-");
		printf("\nEnter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				_flushall();
				int login,f=0;
				char password[90];
				printf("Enter a username\n");
				gets(password);
				printf("Enter a password\n");
				scanf("%d",&login);
			    struct Login l;
				FILE *lgn;
				lgn=fopen("Login.txt","r");
				while(fscanf(lgn,"%s%d",&l.Password,&l.UserId)!=-1);
				{
					if(l.UserId==login&&strcmp(l.Password,password)==0)
					{
						f=1;
						
					    mainn();
						break;
						
					}
				}
				if(f)
				{
					printf("Login Successfully");
				}
				else
				{
					printf("Wrong Pasword And Username");
				}
				break;
			}
			case 2:
				_flushall();
				int Nlogin;
				char Npassword[90];
				printf("Enter a username\n");
				gets(Npassword);
				printf("Enter a password\n");
				scanf("%d",&Nlogin);
				FILE *lgn;
				lgn=fopen("Login.txt","a");
				fprintf(lgn,"%s\t%d\n",Npassword,Nlogin);
				fclose(lgn);
				printf("Create Account Succesfully");
				break;
	    } 
	}while(choice!=3);
}
