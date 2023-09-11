//#include "supplierDetail.h"
struct supplier sup1;
 void  update(int id)
{
	FILE *sptr,*sptr2;
	sptr=fopen("supplierDB.txt","r");
	sptr2=fopen("supplierDB1.txt","a");//empo
	
while( fscanf(sptr,"%[^0-9\t]%d%d%s%s\n",sup1.sname,&sup1.sid,&sup1.smobile_no,&sup1.scity,&sup1.semail)!=-1)
{
        if (sup1.sid != id)
        {
            fprintf(sptr2, "%s\t%d\t%d\t%s\t%s\n", sup1.sname, sup1.sid, sup1.smobile_no,sup1.scity,sup1.semail);
        }
        else
        {
       	supplier sup2;
       	_flushall();
       	 printf("Enter Supplier Name Id Mobile_no City And Email\n");
       	 gets(sup2.sname);
       	 scanf("%d%d%s%ss",&sup2.sid,&sup2.smobile_no,&sup2.scity,&sup2.semail);
             fprintf(sptr2, "%s %d %d %s %s\n", sup2.sname, sup2.sid, sup2.smobile_no,sup2.scity,sup2.semail);
		}
        
    }
	fclose(sptr);
	fclose(sptr2);
	remove("supplierDB.txt");
	rename("supplierDB1.txt","supplierDB.txt");
	printf("Data update succesfully....\n");
}

