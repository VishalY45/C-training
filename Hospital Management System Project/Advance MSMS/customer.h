#include "customerEnter.h"
#include "CustView.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "customersearchId.h"
#include "customersearchName.h"
#include "customerupdate.h"
#include "cusdelete.h"
int idc;
void customer(){
   int choice;
do{
		printf("\n1:INSERT CUSTOMER : ");
		printf("\n2:VIEW CUSTOMER LIST: ");
		printf("\n3:SEARCH  CUSTOMER BY ID : ");
		printf("\n4:SEARCH  CUSTOMER BY NAME: ");
		printf("\n5:UPDATE CUSTOMER DETAILS");
		printf("\n6:DELETE CUSTOMER DETAILS");
		printf("\n7.EXIT..");
	    printf("\nEnter a Which Operation We Want See\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				{
					FILE *count;
	                int count1=0, x;
	   	            count=fopen("Idcount2.txt","a");
	                fprintf(count,"%d\n",x);
                    fclose(count);
		            count=fopen("Idcount2.txt","r");
		            while(fscanf(count,"%d",&x)!=EOF)
	          	   {
    	        	++count1;
		           }
			    	struct customer *cus1;
				    int size;
				    printf("\nEnter a size\n");
				    scanf("%d",&size);
				    cus1=(struct customer*)malloc(sizeof( struct customer)*size);
				    printf("\nEnter customer name|| mobile no|| city ||email\n");
				    for(int i=0;i<size;i++)
				   { _flushall();
				    
				    gets(cus1[i].cname);
				    cus1[i].cid=count1;
					scanf("%d%s%s",&cus1[i].cmobile,&cus1[i].ccity,&cus1[i].cemail);
					customer_enrty(cus1[i]);
			    	}
			        }break;
			       case 2:
			     	viewdata();
				   break;
				case 3:
					{
						int cuid;
						printf("Enter the Customer Id\n");
						scanf("%d",&cuid);
						csearch(cuid);
					}break;
					case 4:
						{_flushall();
							char cuname[90];
						printf("Enter the Customer Name\n");
						//scanf("%s",&cuname);
						gets(cuname);
						cnamesearch(cuname);
					}break;
					case 5:
						{
							int id;
						printf("Enter the Customer id\n");
						scanf("%d",&id);
						cusupdate(id);
					}break;
					case 6:
					{
						int id;
						printf("Enter the Customer id\n");
						scanf("%d",&id);
						cusdelete(id);
					}break;
					default:
						printf("Theank You");
						exit(0);
					}
}while(choice!=7);



}
