struct medicine med1;
 void  update_stock(int sid)
{
	FILE *mptr,*mptr2;
	mptr=fopen("medicineDB.txt","r");
	mptr2=fopen("medicineDB1.txt","a");
	
while( fscanf(mptr,"%s%d%d%d%d%d%s%s%s%d%s%s", &med1.mname, &med1.mid, &med1.mquantity,&med1.mrack,&med1.mcabinate,&med1.pur_price,
			  &med1.mpur_date,&med1.mmanu_date,&med1.mexp_date,&med1.mbill_no,&med1.mcompy_name,&med1.supp_name)!=-1)
{
        if (med1.mid != sid)
        {
        	
            fprintf(mptr2,"%s\t%d\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\%s\t%s\n", med1.mname, med1.mid, med1.mquantity,med1.mrack,med1.mcabinate,med1.pur_price,
			  med1.mpur_date,med1.mmanu_date,med1.mexp_date,med1.mbill_no,med1.mcompy_name,med1.supp_name);
        }
        else
        {
       	medicine med2;
       	  printf("\nEnter medicine_name medicine_id medicine_quantity Rack_No Cabinite_No \n");
	      printf("purchase_price  purchase_date Manu_date Exp_date  Bill_no  Compy_name  Supplier_name");
       	 scanf("%s%d%d%d%d%d%s%s%s%d%s%s",&med1.mname,&med1.mid,&med1.mquantity,&med1.mrack,&med1.mcabinate,&med1.pur_price,&med1.mpur_date,
		     &med1.mmanu_date,&med1.mexp_date,&med1.mbill_no,&med1.mcompy_name,&med1.supp_name);
		     fprintf(mptr2,"%s\t%d\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\%s\t%s\n", med1.mname, med1.mid, med1.mquantity,med1.mrack,med1.mcabinate,med1.pur_price,
			  med1.mpur_date,med1.mmanu_date,med1.mexp_date,med1.mbill_no,med1.mcompy_name,med1.supp_name);
		}
        
    }
	fclose(mptr);
	fclose(mptr2);
	remove("medicineDB.txt");
	rename("medicineDB1.txt","medicineDB.txt");
	printf("Data update succesfully....\n");
}

