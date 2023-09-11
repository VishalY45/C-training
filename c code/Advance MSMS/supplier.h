#include<stdio.h>
#include "SupEnter.h"
#include "viewsup.h"
#include "supsearch.h"
#include "supsearchrname.h"
#include "update.h"
#include "delete.h"
#include<stdlib.h>
#include<string.h>
int id=0;
 void supplier(){
      int choice;
	do
	{
		printf("\n1:INSERT SUPPLIER: ");
		printf("\n2:VIEW SUPPLIER LIST: ");
		printf("\n3:SEARCH BY ID : ");
		printf("\n4:SEARCH BY NAME: ");
		printf("\n5:UPDATE SUPPLIER");
		printf("\n6:DELETE SUPPLIER");
		printf("\n7:EXIT");
	    printf("\nEnter a Which Operation We Want See\n");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1:
				struct supplier *sup1;
				int size;
				printf("\nEnter a size\n");
				scanf("%d",&size);
				sup1=(struct supplier*)malloc(sizeof(struct supplier)*size);
				printf("\nEnter supplier name|| mobile no|| city email||\n");
				for(int i=0;i<size;i++)
				{_flushall();
				    
					gets(sup1[i].sname);
					sup1[i].sid=++id;
					scanf("%d%s%s",&sup1[i].smobile_no,&sup1[i].scity,&sup1[i].semail);
					supplier_enrty(sup1[i]);
				}
			    break;
                case 2:
                	printf("\nThe Sippler List\n");
                	supplier_list();
                  break;
                  
                  case 3:
                  	{
                  	int supid;
                  printf("\nEnter Search id of Supplier\n");
                  scanf("%d",&supid);
                  int result =search(supid);
                  if(result){
                  	printf("Supplier Id is Found");
				  }else{
				  	printf("Supplier Id Not Found");
				  }
		        	}
				  break;
				  case 4:
				  	{
				  		_flushall();
			          char supname[90];
                      printf("\nEnter id of Supplier\n");
                      //scanf("%s",&supname);
                      gets(supname);
                      int result =searchbyname(supname);
                      if(result){
                   	  printf("\nSupplier Id is Found");
				    }else
					{
				  	printf("\nSupplier Id Not Found");
				    }
			        }
				 break;
				 case 5:
				 	int Uid;
				 	printf("\nEnter Update id\n");
				 	scanf("%d",&Uid);
				 	update(Uid);
				 	break;
				 case 6:
				 	int Did;
				 	printf("\nEnter Delete id");
				 	scanf("%d",&Did);
				 	supdelete(Did);
				 	break;
                  default:
                  	printf("\nThank You");
                  	exit(0);
        }
            
      }while(choice!=7);
  
}
                
