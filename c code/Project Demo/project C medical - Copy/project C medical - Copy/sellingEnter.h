#include"medsellingDetail.h"
 #include<stdio.h>

 void sell_enrty(sell sell1){
	 
				FILE *mptr;
				mptr=fopen("sellingDB.txt","a");
              fprintf(mptr, "%s\t%s\t%d\t%d\t%d\t%d\t%d\t%s\n",sell1.mediN,sell1.customerN,sell1.id,sell1.mediquantity,sell1.purprice
					      ,sell1.sellingPrice,sell1.profit,sell1.datee);
              	fclose(mptr);
                printf("Data sell Successfully...");
                	
        }
