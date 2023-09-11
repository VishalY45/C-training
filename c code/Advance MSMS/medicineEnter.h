#include "medicineDetail.h"
#include<stdio.h>
void medicine_enrty(medicine med1)
{
	FILE *mptr;
	mptr=fopen("medicineDB.txt","a");
	fprintf(mptr,"%s\t\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",med1.mname,med1.mcompy_name,med1.supp_name,med1.mid,med1.mquantity,med1.mrack,
	         med1.mcabinate,med1.pur_price,med1.mpur_date,med1.mmanu_date,med1.mexp_date,
		     med1.mbill_no);
		     fclose(mptr);
		     printf("\nData Insert Succesfully");
}