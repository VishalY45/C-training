#include "student.h"
#include<stdio.h>
void insert(student s1)
{
	FILE *fptr;
	fptr=fopen("studentdb.txt","a");
	fprintf(fptr,"%s\t%d\t%d\n",s1.name,s1.rollno,s1.clas);
	fclose(fptr);
	printf("Data save success.......\n");
	
}