 #include "customerDetail.h"
 void customer_enrty(customer cus1)
 {
	           FILE *cptr;
				cptr=fopen("customerDB.txt","a");
              	fprintf(cptr,"%s\t%d\t%d\t%s\t%s\n",cus1.cname,cus1.cid,cus1.cmobile,cus1.ccity,cus1.cemail);
              	fclose(cptr);
                printf("Data save Successfully...");
				}
