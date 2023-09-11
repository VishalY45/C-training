#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[90];
	int id;
	int fees;
};
struct student s1;
void insert();
void view();
void search();
void arrange();
void update();
int choice;
int main()
{
	do
	{
		printf("\n1:INSERT");
		printf("\n2:VIEW");
		printf("\n3:SEARCH");
		printf("\n4:ARRANGE");
		printf("\n5:UPDATE");
		printf("\n5:UPDATE");
		printf("ENter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				_flushall();
				insert();
				break;
				case 2:
					view();
					break;
					case 3:
						_flushall();
						search();
						break;
						case 4:
					     
						arrange();
							break;
							case 5:
								update();
								break;
//								case 6:
//									up();
//									break;
						
							    default:
								printf("\nWrong choice");
		}
	}while(choice!=6);
}
void insert()
{
	FILE *fptr;

	fptr=fopen("D:\\c code\\File handling\\student.txt","a");
	printf("Enter a name id and fees of student\n");
	_flushall();
	//scanf("%[^\n]",&s1.name);
//	puts(s1.name);
	 //fgets (s1.name, 90, stdin);
	 //s1.name[strcspn(s1.name,"\n")]='\0';
	 	gets(s1.name);
	
	scanf("%d%d",&s1.id,&s1.fees);
	fprintf(fptr,"%s\t%d\t%d\n",s1.name,s1.id,s1.fees);
	printf("Data Store Succesfully....\n");
	fclose(fptr);
}
void view()
{
	FILE *fptr;
	int flag=0;
	char ch=' ';
	fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	while(fscanf(fptr,"%s%d%d",&s1.name,&s1.id,&s1.fees)!=EOF)
{
//	  if(s1.id != ch)
//	  {
//	  	if(s1.name==' ')
//	  	continue;
//	  	flag=1;
//	  }
	  printf("%s %d %d\n",s1.name,s1.id,s1.fees);
	   
	
	}
//    int name_length = strlen(s1.name);
//    if (s1.name[name_length - 1] == '\n')
//    {
//        s1.name[name_length - 1] = '\0'; // Remove the newline character
//    }
//
//    fgets(s1.name, sizeof(s1.name), fptr); // Read ID and fees lines
//    sscanf(s1.name, "%d%d", &s1.id, &s1.fees); // Parse ID and fees
//
//    printf("%s\t%d\t%d\n", s1.name, s1.id, s1.fees);

//	while (fgets(s1.name, sizeof(s1.name), fptr) != NULL)
//    {
//    	 int length=strlen(s1.name);
//    	 if(length>0&&s1.name[length-1]=='\n')//vishal yadav
//    	 {
//    	 	s1.name[length-1]='\0';
//		 }
//		 fgets(s1.name,sizeof(s1.name),fptr);
//		 //sscanf(s1.name, "%d%d", &s1.id, &s1.fees);
//		 printf("%s\t%d\t%d\n",s1.name,s1.id,s1.fees);
//	}
	fclose(fptr);
}
void search()
{
	FILE *fptr;
	fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	int flag=0;
	char ch[90];
	printf("Enter a search name\n");
	gets(ch);
	
	while(fscanf(fptr,"%s%d%d",&s1.name,&s1.id,&s1.fees)!=-1)
	{
		if(strcmp(s1.name,ch)==0)
		{
			flag=1;
			break;
		}
	}
	fclose(fptr);
	if(flag)
	{
		printf("Data Is Found\n");
		printf("%s %d %d",s1.name,s1.id,s1.fees);
	}
	else
	{
		printf("Data Is not found\n");
	}
}
void arrange()
{
	FILE *fptr;
	fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	
	int count=0,i=0;
	  
	  while(fscanf(fptr,"%s\t%d\t%d\n",&s1.name,&s1.id,&s1.fees)!=EOF)
	  {
	  	count++;
	  }
	  fclose(fptr);
	 struct student *s1=(struct student*)malloc(count *sizeof(struct student));
	  fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	  while(fscanf(fptr,"%s\t%d\t%d\n",&s1[i].name,&s1[i].id,&s1[i].fees)!=EOF)
	  {
	  	i++;
	  }
	fclose(fptr);
	for(i=0;i<count-1;i++)
	{
		for(int j=i+1;j<(count);j++)
		{
			if(s1[i].fees<s1[j].fees)
			{
			struct student temp=s1[i];
			s1[i]=s1[j];
			s1[j]=temp;
		}
		}
	}
	printf("Display Result\n");
	for(i=0;i<count;i++)
	{
		printf("%s\t:%d\t:%d\n",s1[i].name,s1[i].id,s1[i].fees);
	}
	fclose(fptr);
}
void update()
{
	//struct student s1;
	FILE *fptr,*fptr2;
	fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	fptr2=fopen("D:\\c code\\File handling\\student2.txt","a");
	int nid;
	printf("Enter id for update");
	scanf("%d",&nid);
 while (fscanf(fptr, "%s %d %d", &s1.name, &s1.id, &s1.fees) != EOF)
    {
        if (s1.id != nid)
        {
        	
            fprintf(fptr2, "%s %d %d\n", s1.name, s1.id, s1.fees);
        }
        else
        {
       	 struct student s2;
       	 printf("Enter a name id fess");
       	 scanf("%s%d%d",&s2.name,&s2.id,&s2.fees);
             fprintf(fptr2, "%s %d %d\n", s2.name, s2.id, s2.fees);
		}
        
    }
	fclose(fptr);
	fclose(fptr2);
	remove("D:\\c code\\File handling\\student.txt");
	rename("D:\\c code\\File handling\\student2.txt","D:\\c code\\File handling\\student.txt");
	printf("Data delete succesfully....\n");
}
