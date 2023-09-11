 
 void supplier_list(){
			 FILE *sptr;
			 
                sptr=fopen("supplierDB.txt","r");
                supplier sup1;
                printf("\nThe Display Record\n");
			    while( fscanf(sptr,"%s%d%d%s%s",&sup1.sname,&sup1.sid,&sup1.smobile_no,&sup1.scity,&sup1.semail)!=-1)
             	{
	             	printf("%s\t%d\t%d\t%s\t%s\n",sup1.sname,sup1.sid,sup1.smobile_no,sup1.scity,sup1.semail);
             	}
                 	fclose(sptr);
                
            }
