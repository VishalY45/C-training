void view(){
			 
			 FILE *mptr;
			 
                mptr=fopen("medicineDB.txt","r");
                medicine med1;
			    while( fscanf(mptr,"%s%d%d%d%d%d%s%s%s%d%s%s",&med1.mname,&med1.mid,&med1.mquantity,&med1.mrack,&med1.mcabinate,&med1.pur_price,
	&med1.mpur_date,&med1.mmanu_date,&med1.mexp_date,&med1.mbill_no,&med1.mcompy_name,&med1.supp_name)!=-1){
	      
	             printf("%s\t%d\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%s\n", med1.mname, med1.mid, med1.mquantity,
        med1.mrack, med1.mcabinate, med1.pur_price, med1.mpur_date, med1.mmanu_date, med1.mexp_date,
        med1.mbill_no, med1.mcompy_name, med1.supp_name);
             	}
                 	fclose(mptr);
                
            }
