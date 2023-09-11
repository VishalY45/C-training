#include<stdio.h>
void bill(){

	            int choice;
	            do{
	            	printf("\n1:VIEW All BILL");
	            	printf("\n2:GIVE SLIP");
	            	printf("\n3:Exit");
	            	printf("\nEnter choice");
	            	scanf("%d",&choice);
	            	switch(choice)
	            	{  
	            		case 1:
	            			printf("\nThe Billing stock\n");
	            			FILE *mptr;
			                mptr=fopen("sellingDB.txt","r");
                            sell sell1;
			                 while( fscanf(mptr,"%s%s%d%d%d%d%d%s",&sell1.mediN,&sell1.customerN,&sell1.id,&sell1.mediquantity,&sell1.purprice
					      ,&sell1.sellingPrice,&sell1.profit,&sell1.datee)!=-1)
                         	{
	               			printf( "%s\t%s\t%d\t%d\t%d\t%s\n",sell1.mediN,sell1.customerN,sell1.id,sell1.mediquantity,sell1.sellingPrice,sell1.datee);
             				}
                 			fclose(mptr);
							break;
							case 2:
								int id;
								printf("Enter a id\n");
								scanf("%d",&id);
								mptr=fopen("sellingDB.txt","r");
								int f=0;
								while(fscanf(mptr,"%s%s%d%d%d%d%d%s",&sell1.mediN,&sell1.customerN,&sell1.id,&sell1.mediquantity,&sell1.purprice
					      ,&sell1.sellingPrice,&sell1.profit,&sell1.datee)!=-1)
			                 {
			                 	if(sell1.id==id)
			                 	{
			                 		f=1;
			                 	printf("%s\t%s\t%d\t%d\t%d\t%s\n",sell1.customerN,sell1.mediN,sell1.id,sell1.mediquantity,sell1.purprice,sell1.datee);	
								 }
								 
							 }
							 if(f)
							 {
							 	printf("Data Found\n");
							 }
							 else
							 {
							 	printf("Data not found\n");
							 }
							 fclose(mptr);
							 break;
							 defalut:
							 	printf("Thank You");
							 	exit(0);
					}
				}while(choice!=3);
	            
}

