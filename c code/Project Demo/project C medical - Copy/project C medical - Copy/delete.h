void supdelete( int Did)
{
	FILE *sptr,*sptr2;
	sptr=fopen("supplierDB.txt","r");
	sptr2=fopen("supplierDB1.txt","a");
	
while( fscanf(sptr,"%s%d%d%s%s",&sup1.sname,&sup1.sid,&sup1.smobile_no,&sup1.scity,&sup1.semail)!=-1)
    {
        if (sup1.sid != Did)
        {
        	
            fprintf(sptr2, "%s %d %d %s %s\n", sup1.sname, sup1.sid, sup1.smobile_no,sup1.scity,sup1.semail);
        }
        
    }
	fclose(sptr);
	fclose(sptr2);
	remove("supplierDB.txt");
	rename("supplierDB1.txt","supplierDB.txt");
	printf("Data Delete succesfully....\n");
}


