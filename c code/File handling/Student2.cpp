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
int choice;
int main()
{
	do
	{
		printf("\n1:INSERT");
		printf("\n2:VIEW");
		printf("\n3:SEARCH");
		printf("\n4:ARRANGE");
		printf("\nENter a choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				_flushall();
//				insert();
	FILE *fptr;
	fptr=fopen("D:\\c code\\File handling\\student.txt","a");
	printf("Enter a name id and fees of student\n");
	gets(s1.name);
	scanf("%d%d",&s1.id,&s1.fees);
	fprintf(fptr,"%s\t%d\t%d\n",s1.name,s1.id,s1.fees);
	printf("Data Store Succesfully....\n");
	fclose(fptr);
				break;
				case 2:
					//view();
	fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	while(fscanf(fptr,"%s%d%d",&s1.name,&s1.id,&s1.fees)!=-1)
	{
		printf("%s\t%d\t%d\n",s1.name,s1.id,s1.fees);
	}
	fclose(fptr);
					break;
					case 3:
						{
						
					_flushall();
					//	search();
				//	FILE *fptr;
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
	}					break;
						case 4:
					     {
						//FILE *fptr;
						
	fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	//struct student *s1=(struct student*)malloc(sizeof(student));
	int count=0,i=0;
	  
	  while(fscanf(fptr,"%s\t%d\t%d\n",&s1.name,&s1.id,&s1.fees)!=EOF)
	  {
	  	count++;
	  }fclose(fptr);
	  	struct student *s1=(struct student*)malloc(count *sizeof(struct student));
	  fptr=fopen("D:\\c code\\File handling\\student.txt","r");
	  while(fscanf(fptr,"%s\t%d\t%d\n",&s1[i].name,&s1[i].id,&s1[i].fees)!=EOF)
	  {
	  	i++;
	  }
	  printf("%d",i);
	fclose(fptr);
	
	for(i=0;i<count-1;i++)
	{
		for(int j=0;j<(count-i-1);i++)
		{
			if(s1[j].fees<s1[j+1].fees)
			{
			struct student temp=s1[j];
			s1[j]=s1[j+1];
			s1[j+1]=temp;
		}
	}
	printf("Display Result\n");
	for(i=0;i<count;i++)
	{
		printf("name:%s\tid:%d\tfees:%d\n",s1[i].name,s1[i].id,s1[i].fees);
	}
	fclose(fptr);
}
	break;
						}
							    default:
								printf("\nWrong choice");
		}
	}while(choice!=6);
}