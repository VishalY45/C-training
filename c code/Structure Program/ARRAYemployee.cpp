#include<stdio.h>
#include<String.h>
struct strudent
{
	int id;
	char name[10];
	int clas;
	float marks;
	
}s[2];
int main()
{
//	struct student s[5];
	printf("Enter a five Student details\n");
	for(int i=0;i<2;i++)
	{
		printf("Enter Student id name class and marks:-\n");
		scanf("%d%s%d%f",&s[i].id,&s[i].name,&s[i].clas,&s[i].marks);
	}
	printf("\nDisplay Information\n");
	for(int i=0;i<2;i++)
	{
		printf("%d\t%s\t%d\t%f\n",s[i].id,s[i].name,s[i].clas,s[i].marks);
	}
	
}
