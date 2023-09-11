void selling_list(){
			 FILE *mptr;
			 
                mptr=fopen("sellingDB.txt","r");
                sell sell1;
			    while( fscanf(mptr,"%s%s%d%d%d%d%d%s",&sell1.mediN,&sell1.customerN,&sell1.id,&sell1.mediquantity,&sell1.purprice
					      ,&sell1.sellingPrice,&sell1.profit,&sell1.datee)!=-1)
             	{
	             	printf( "%s\t%s\t%d\t%d\t%d\t%d\t%d\t%s\n",sell1.mediN,sell1.customerN,sell1.id,sell1.mediquantity,sell1.purprice
					      ,sell1.sellingPrice,sell1.profit,sell1.datee);
             	}
                 	fclose(mptr);
                
            }
