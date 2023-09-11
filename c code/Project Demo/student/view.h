void view()
{
	FILE *fptr;
	fptr=fopen("studentdb.txt","r");
	student s1;
	while(fscanf(fptr,"%s%d%d",&s1.name,&s1.rollno,&s1.clas)!=-1)
	{
		printf("%s %d  %d\n",s1.name,s1.rollno,s1.clas);
		//printf("\n");
	}
	fclose(fptr);
}