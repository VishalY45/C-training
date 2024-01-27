struct customer cus1;
 void  cusupdate(int id)
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
        else
        {
        	_flushall();
       	customer cus2;
       	 printf("Enter customer Name Id Mobile_no City And Email\n\n");
       	 gets(cus2.cname);
       	 scanf("%d%d%s%s",&cus2.cid,&cus2.cmobile,&cus2.ccity,&cus2.cemail);
            fprintf(cptr2,"%s\t%d\t%d\t%s\t%s\n",cus2.cname,cus2.cid,cus2.cmobile,cus2.ccity,cus2.cemail);
		}
        
    }
	fclose(cptr);
	fclose(cptr2);
	remove("customerDB.txt");
	rename("customerDB1.txt","customerDB.txt");
	printf("Data update succesfully....\n");
}

