 
 void viewdata(){
			 FILE *cptr;
			 
                cptr=fopen("customerDB.txt","r");
                customer cus1;
                printf("\n\t\t\tThe Customer Details \n\n");
			    while( fscanf(cptr,"%[^0-9\t]%d%d%s%s\n",cus1.cname,&cus1.cid,&cus1.cmobile,&cus1.ccity,&cus1.cemail)!=-1)
             	{
	             	printf("%s\t%d\t%d\t%s\t%s\n",cus1.cname,cus1.cid,cus1.cmobile,cus1.ccity,cus1.cemail);
             	}
                 	fclose(cptr);
                
            }
