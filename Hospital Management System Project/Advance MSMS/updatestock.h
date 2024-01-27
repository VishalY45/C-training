struct medicine med1;
 void  update_stock(int sid)
{
	FILE *mptr,*mptr2;
	mptr=fopen("medicineDB.txt","r");
	mptr2=fopen("medicineDB1.txt","a");
	
while( fscanf(mptr,"%[^0-9\t]%s%s%d%d%d%d%d%d%d%d%d", med1.mname,&med1.mcompy_name,&med1.supp_name,&med1.mid, &med1.mquantity,&med1.mrack,&med1.mcabinate,&med1.pur_price,
			  &med1.mpur_date,&med1.mmanu_date,&med1.mexp_date,&med1.mbill_no)!=-1)
{
        if (med1.mid != sid)
        {
        	
            fprintf(mptr2,"%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", med1.mname,med1.mcompy_name,med1.supp_name,med1.mid, med1.mquantity,med1.mrack,med1.mcabinate,med1.pur_price,
			  med1.mpur_date,med1.mmanu_date,med1.mexp_date,med1.mbill_no);
        }
        else
        {
        	_flushall();
       	medicine med2;
       	  //printf("\nEnter medicine_nameCompy_name  Supplier_name medicine_id medicine_quantity Rack_No Cabinite_No \n");
	      //printf("purchase_price  purchase_date Manu_date Exp_date  Bill_no  ");
	      printf("Enter a medicene name\n");
	      gets(med2.mname);
	      _flushall();
	      printf("Enter a company name:=\t");
	      gets(med2.mcompy_name);
	      _flushall();
	      printf("Enter a supplier name:=");
	      gets(med2.supp_name);
	      printf("Enter a id:=\t");
	      scanf("%d",&med2.mid);
	      printf("Enter a quanity:=\t");
	      scanf("%d",&med2.mquantity);
	      printf("Enter a rackno:=\t");
	      scanf("%d",&med2.mrack);
	      printf("Enter a cabinateno:=\t");
	      scanf("%d",&med2.mcabinate);
	      printf("Enter a purchase price:=\t");
	      scanf("%d",&med2.pur_price);
	      printf("Enter a puchase date (dd\\mm\\yy\\):=\t");
	      scanf("%d",&med2.mpur_date);
	      printf("Enter a manufacture date (dd\\mm\\yy\\):=\t");
	      scanf("%d",&med2.mmanu_date);
	      printf("Enter a expiry date (dd\\mm\\yy\\):=\t");
	      scanf("%d",&med2.mexp_date);
	      printf("Enter a Bill Id:=\t");
	      scanf("%d",&med2.mbill_no);
	     /* 
       	 scanf("%s%s%s%d%d%d%d%d%d%d%d%d",&med2.mcompy_name,&med2.supp_name,&med2.mid,&med2.mquantity,&med2.mrack,&med2.mcabinate,&med2.pur_price,&med2.mpur_date,
		     &med2.mmanu_date,&med2.mexp_date,&med2.mbill_no);*/
		     fprintf(mptr2,"%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", med2.mname,med2.mcompy_name,med2.supp_name, med2.mid, med2.mquantity,med2.mrack,med2.mcabinate,med2.pur_price,
			  med2.mpur_date,med2.mmanu_date,med2.mexp_date,med2.mbill_no);
		}
        
    }
	fclose(mptr);
	fclose(mptr2);
	remove("medicineDB.txt");
	rename("medicineDB1.txt","medicineDB.txt");
	printf("Data update succesfully....\n");
}

