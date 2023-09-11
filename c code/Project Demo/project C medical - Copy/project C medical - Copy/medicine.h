#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "medicineEnter.h"
#include "medview.h"
#include "medicinesearch.h"
#include "sellingEnter.h"
#include "sellingview.h"
#include "updatestock.h"
 void medicine(){
      int choice;
	do
	{
		printf("\n1:INSERT MEDICAL STOCK: ");
		printf("\n2:VIEW MEDICINE LIST: ");
		printf("\n3:SEARCH BY ID : ");
		printf("\n4:INSERT SELIING DETAILS: ");
		printf("\n5:VIEW SELLING LIST");
		printf("\n6:UPDATE STOCK");
		printf("\n7EXIT");
	    printf("\nEnter a Which Operation We Want See\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					struct  medicine *med1;
				int size;
	printf("\nEnter a size\n");
	scanf("%d",&size);
	med1=(struct  medicine*)malloc(sizeof(struct medicine)*size);
   printf("\nEnter medicine_name| medicine_id| medicine_quantity| Rack_No| Cabinite_No| \n");
	printf("\npurchase_price|  purchase_date |Manu_date| Exp_date | Bill_no | Compy_name | Supplier_name");
		for(int i=0;i<size;i++)
		{ 
		  scanf("%s%d%d%d%d%d%s%s%s%d%s%s",&med1[i].mname,&med1[i].mid,&med1[i].mquantity,&med1[i].mrack,&med1[i].mcabinate,&med1[i].pur_price,&med1[i].mpur_date,
		     &med1[i].mmanu_date,&med1[i].mexp_date,&med1[i].mbill_no,&med1[i].mcompy_name,&med1[i].supp_name);
		  medicine_enrty( med1[i]);
		}
					} break;
					case 2:
						{
							printf("\nThe Total Stock\n");
					view();
						}
					break;
					case 3:
						{
							int msid;
							printf("Enter id for medicine search");
							scanf("%d",&msid);
						int result=medsearch(msid);
						if(result){
							printf("Id is found");
						}else{
						    printf("Id is not found");	
						}	
						}
						break;
						case 4:
								struct sell *sell1;
				int size;
				printf("\nEnter a size\n");
				scanf("%d",&size);
				sell1=(struct sell*)malloc(sizeof(struct sell)*size);
				printf("\nEnter costomer_name med_name id qauanity price selling price profit date \n");
				for(int i=0;i<size;i++)
				{
					scanf("%s%s%d%d%d%d%d%s",&sell1[i].mediN,&sell1[i].customerN,&sell1[i].id,&sell1[i].mediquantity,&sell1[i].purprice
					      ,&sell1[i].sellingPrice,&sell1[i].profit,&sell1[i].datee);
					sell_enrty(sell1[i]);
				}break;
		case 5:
			printf("\nThe selling stock\n");
			selling_list();
			break;
			 case 6:
				 	int Uid;
				 	printf("Enter Update id");
				 	scanf("%d",&Uid);
				 	update_stock(Uid);
				 	break;
				 	default:
				 		printf("Thank You");
				 		exit(0);
		}
	}while(choice!=6);
}
