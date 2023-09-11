 
 void viewdata(){
			 FILE *cptr;
			 
                cptr=fopen("customerDB.txt","r");
                customer cus1;
			    while( fscanf(cptr,"%s%d%d%s%s",&cus1.cname,&cus1.cid,&cus1.cmobile,&cus1.ccity,&cus1.cemail)!=-1)
             	{
	             	printf("%s\t%d\t%d\t%s\t%s\n",cus1.cname,cus1.cid,cus1.cmobile,cus1.ccity,cus1.cemail);
             	}
                 	fclose(cptr);
                
            }
