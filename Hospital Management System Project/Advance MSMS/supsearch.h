int search(int supid)
{
	FILE *sptr;
	int flag=0;
	sptr=fopen("supplierDB.txt","r");
	 supplier sup1;
	 printf("\n\t\t Searching.....\n\n");
	 sleep(1);
 while(fscanf(sptr,"%[^0-9\t]%d%d%s%s\n",sup1.sname,&sup1.sid,&sup1.smobile_no,&sup1.scity,&sup1.semail)!=-1)
	{
		if(sup1.sid==supid)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s\t%d\t%d\t%s\t%s\n",sup1.sname,sup1.sid,sup1.scity,sup1.semail);
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(sptr);
}
