#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[90];
	int fees;
};
  
 struct student s1;
 
 void insert(){
 	 FILE *fptr;
         	fptr=fopen("D:\\student.txt","a");
    	    printf("\n Enter Data in file\n");
    	    _flushall();
    	gets(s1.name);
    	scanf("%d%d",&s1.id,&s1.fees);
    	fprintf(fptr,"%s\t%d\t%d\n"	,s1.name,s1.id,s1.fees);
    	printf(" Added");
    	
 }
 void view(){
 	   FILE *fptr;
         	fptr=fopen("D:\\student.txt","r");
    	    while(fscanf(fptr,"%s%d%d",&s1.name,&s1.id,&s1.fees)!=-1){
    	    	 printf("%s\t%d\t%d\n",s1.name,s1.id,s1.fees);
			}
    	   fclose(fptr);
 }
 void arrange();
 {
 	
 }
 void search(){
 	FILE *fptr;
 	char Sname[90];
 		fptr=fopen("D:\\student.txt","r");
 		printf("Enter the Student Name");
 		_flushall();
 		gets(Sname);
 		int flag=0;
 		while(fscanf(fptr,"%s%d%d",&s1.name,&s1.id,&s1.fees)!=-1){
 			if(strcmp(s1.name,Sname)==0){
 				flag=1;
 				break;
			 }
		 }
		 if(flag){
		 	printf(" Student is found");
		 }else{
		 		printf(" Student is not found");
		 }
 }
 
 int main(){
 int choice;
 printf("Enter the choice");
 scanf("%d",&choice);
    switch(choice){
    	 
    	 case 1:
    	 	insert();
    	 	break;
    	 	case 2:
    	 		view();
    	 		break;
    	 		case 3:
    	 		   break;
    	 		    case 4:
    	 		    	search();
    	 	        	break;
    	 		
    	   
	}
}