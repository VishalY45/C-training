int csearch(int cuid)
{
	FILE *cptr;
	int flag=0;
	cptr=fopen("customerDB.txt","r");
	 customer cus1;
 while(fscanf(cptr,"%s%d%d%s%s",&cus1.cname,&cus1.cid,&cus1.cmobile,&cus1.ccity,&cus1.cemail)!=-1)
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
