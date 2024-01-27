void view(){
			 
			 FILE *mptr;
			 
                mptr=fopen("medicineDB.txt","r");
                medicine med1;
                printf("\n\n\t\t The Total Stock Present In Medical Store\n\n");
                printf("\ncustomerName     cname  supplier id quanity rack cabinate price   purdate mandate expdate bill no\n");
			    while( fscanf(mptr,"%[^0-9\t]%s%s%d%d%d%d%d%d%d%d%d%d\n",med1.mname,&med1.mcompy_name,&med1.supp_name,&med1.mid,&med1.mquantity,&med1.mrack,&med1.mcabinate,&med1.pur_price,
	&med1.mpur_date,&med1.mmanu_date,&med1.mexp_date,&med1.mbill_no)!=-1){
	      
	             printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", med1.mname,med1.mcompy_name, med1.supp_name,med1.mid, med1.mquantity,
        med1.mrack, med1.mcabinate, med1.pur_price, med1.mpur_date, med1.mmanu_date, med1.mexp_date,
        med1.mbill_no);
             	}
                 	fclose(mptr);
                
            }
