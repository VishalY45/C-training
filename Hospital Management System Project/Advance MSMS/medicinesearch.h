int medsearch(int msid)
{
	FILE *mptr;
	int flag=0;
	mptr=fopen("medicineDB.txt","r");
	 medicine med1;
	 printf("\n\n\t\t Searching.....\n\n");
	 sleep(1);
 while(fscanf(mptr,"%[^0-9\t]%s%s%d%d%d%d%d%d%d%d%d\n", &med1.mname,&med1.mcompy_name,&med1.supp_name,&med1.mid, &med1.mquantity,&med1.mrack,&med1.mcabinate,&med1.pur_price,
			  &med1.mpur_date,&med1.mmanu_date,&med1.mexp_date,&med1.mbill_no)!=-1)
	{
		if(med1.mid==msid)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", med1.mname,med1.mcompy_name,med1.supp_name, med1.mid, med1.mquantity,med1.mrack,med1.mcabinate,med1.pur_price,
			  med1.mpur_date,med1.mmanu_date,med1.mexp_date,med1.mbill_no);
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(mptr);
}
