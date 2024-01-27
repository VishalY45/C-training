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
		FILE *count;
	    int count1=0, x;
	   	count=fopen("Idcount1.txt","a");
	    fprintf(count,"%d\n",x);
         fclose(count);
		count=fopen("Idcount1.txt","r");
		while(fscanf(count,"%d",&x)!=EOF)
		{
    		++count1;
		}
		_flushall();		
		struct  medicine *med1;
		int size;
		med1=(struct medicine*)malloc(sizeof(struct medicine)*size);		
	     printf("\nEnter a size\n");
	    scanf("%d",&size);
		for(int i=0;i<size;i++)
		{ _flushall();
		 printf("\nEnter a medicene name=\n");
	      gets(med1[i].mname);
	      printf("\nEnter a company name:=");
	      gets(med1[i].mcompy_name);
	      _flushall();
	      printf("Enter a supplier name:=");
	      gets(med1[i].supp_name);
          med1[i].mid=count1;
	      printf("Enter a quanity:=");
	      scanf("%d",&med1[i].mquantity);
	      printf("Enter a rackno:=");
	      scanf("%d",&med1[i].mrack);
	      printf("Enter a cabinateno:=");
	      scanf("%d",&med1[i].mcabinate);
	      printf("Enter a purchase price:=");
	      scanf("%d",&med1[i].pur_price);
	      printf("Enter a puchase date (dd\\mm\\yy\\):=");
	      scanf("%d",&med1[i].mpur_date);
	      printf("Enter a manufacture date (dd\\mm\\yy\\):=");
	      scanf("%d",&med1[i].mmanu_date);
	      printf("Enter a expiry date (dd\\mm\\yy\\):=");
	      scanf("%d",&med1[i].mexp_date);
	      printf("Enter a Bill Id:=");
	      scanf("%d",&med1[i].mbill_no);
//		  scanf("%s%s%d%d%d%d%d%d%d%d%d",&med1[i].mcompy_name,&med1[i].supp_name,&med1[i].mid,&med1[i].mquantity,&med1[i].mrack,&med1[i].mcabinate,&med1[i].pur_price,&med1[i].mpur_date,
//		     &med1[i].mmanu_date,&med1[i].mexp_date,&med1[i].mbill_no);
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
							printf("\nId is found\n\n");
						}else{
						    printf("\nId is not found\n\n");	
						}	
						}
						break;
						case 4:
								struct sell *sell1;
				int size;
				printf("\nEnter a size\n");
				scanf("%d",&size);
				sell1=(struct sell*)malloc(sizeof(struct sell)*size);
				printf("\nEnter costomer_name|| med_name||Date||Dr name|| id|| qauanity|| price|| selling price|| profit \n");
				for(int i=0;i<size;i++)
				{_flushall();
				  gets(sell1[i].customerN);
					scanf("%s%s%s%d%d%d%d%d",&sell1[i].mediN,&sell1[i].datee,&sell1[i].dr,&sell1[i].id,&sell1[i].mediquantity,&sell1[i].purprice
					      ,&sell1[i].sellingPrice,&sell1[i].profit);
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
