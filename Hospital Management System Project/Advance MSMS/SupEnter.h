 #include"supplierDetail.h"
 #include<stdio.h>
 void supplier_enrty(supplier sup1){
	           
				FILE *sptr;
				sptr=fopen("supplierDB.txt","a");
              	fprintf(sptr,"%s\t%d\t%d\t%s\t%s\n",sup1.sname,sup1.sid,sup1.smobile_no,sup1.scity,sup1.semail);
              	fclose(sptr);
                printf("Data save Successfully...");
                
            }
