void cusdelete(int id)
{
	FILE *cptr,*cptr2;
	cptr=fopen("customerDB.txt","r");
	cptr2=fopen("customerDB1.txt","a");
while( fscanf(cptr,"%[^0-9\t]%d%d%s%s\n",cus1.cname,&cus1.cid,&cus1.cmobile,&cus1.ccity,&cus1.cemail)!=-1)
{
        if (cus1.cid != id)
        {
        	
             fprintf(cptr2,"%s\t%d\t%d\t%s\t%s\n",cus1.cname,cus1.cid,cus1.cmobile,cus1.ccity,cus1.cemail);
        }  
    }
	fclose(cptr);
	fclose(cptr2);
	remove("customerDB.txt");
	rename("customerDB1.txt","customerDB.txt");
	printf("Data delete succesfully....\n");
}

