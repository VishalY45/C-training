//#include<string.h>
int searchbyname(char *supname)
{
	FILE *sptr;
	int flag=0;
	sptr=fopen("supplierDB.txt","r");
	 supplier sup1;
 while(fscanf(sptr,"%s%d%d%s%s",&sup1.sname,&sup1.sid,&sup1.smobile_no,&sup1.scity,&sup1.semail)!=-1)
	{
		if(strcmp(sup1.sname,supname)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\nThe Searh Data\n");
		printf("%s\t%d\t%d\t%s\t%s\n",sup1.sname,sup1.sid,sup1.scity,sup1.semail);
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(sptr);
}
