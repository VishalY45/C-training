int csearch(int cuid)
{
	FILE *cptr;
	int flag=0;
	cptr=fopen("customerDB.txt","r");
	 customer cus1;
	 printf("\n\n\t Searching Record....\n\n");
	 sleep(1);
 while(fscanf(cptr,"%[^0-9\t]%d%d%s%s\n",cus1.cname,&cus1.cid,&cus1.cmobile,&cus1.ccity,&cus1.cemail)!=-1)
	{
		if(cus1.cid==cuid)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s\t%d\t%d\t%s\t%s\n",cus1.cname,cus1.cid,cus1.cmobile,cus1.ccity,cus1.cemail);
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(cptr);
}
