 
 void supplier_list(){
			 FILE *sptr;
			 
                sptr=fopen("supplierDB.txt","r");
                supplier sup1;
                printf("\n\t\tThe Supplier Record\n\n");
                sleep(1);
			    while( fscanf(sptr,"%[^0-9\t]%d%d%s%s\n",sup1.sname,&sup1.sid,&sup1.smobile_no,&sup1.scity,sup1.semail)!=-1)
             	{
	             	printf("%s\t%d\t%d\t%s\t%s\n",sup1.sname,sup1.sid,sup1.smobile_no,sup1.scity,sup1.semail);
             	}
                 	fclose(sptr);
                
            }
