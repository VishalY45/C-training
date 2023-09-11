void selling_list(){
			 FILE *mptr;
			 
                mptr=fopen("sellingDB.txt","r");
                sell sell1;
                printf("\n\n\t Data Loading......\n\n");
                sleep(1);
			    while( fscanf(mptr,"%[^0-9\t]%s%s%s%d%d%d%d%d\n",sell1.customerN,&sell1.mediN,&sell1.datee,&sell1.dr,&sell1.id,&sell1.mediquantity,&sell1.purprice
					      ,&sell1.sellingPrice,&sell1.profit)!=-1)
             	{
	             	printf( "%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\n",sell1.customerN,sell1.mediN,sell1.datee,sell1.dr,sell1.id,sell1.mediquantity,sell1.purprice
					      ,sell1.sellingPrice,sell1.profit);
             	}
                 	fclose(mptr);
                
            }
