int search(int nid)
{
	FILE *fptr;
	int flag=0;
	fptr=fopen("studentdb.txt","r");
	student s1;
	while(fscanf(fptr,"%s%d%d",&s1.name,&s1.rollno,&s1.clas)!=EOF)
	{
		if(s1.rollno==nid)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s %d %d",s1.name,s1.rollno,s1.clas);
		return 1;
	}
	else
	{
		return 0;
	}
}