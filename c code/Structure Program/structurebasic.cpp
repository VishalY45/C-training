#include<stdio.h>
#include<stdlib.h>
struct student
{
	int id;
	char name[90];
	int fees;
};
int main()
{
	int size;
	printf("ENter a size");
	scanf("%d",&size);
	 student *s1;
	s1=(struct student*)malloc(sizeof(struct student)*size);
	printf("Enter a id name fees\n");
	for(int i=0;i<size;i++)
	{
	scanf("%d%s%d",&s1[i].id,&s1[i].name,&s1[i].fees);
    }
    for(int i=0;i<size;i++)
	printf("%d\t%s\t%d\n",s1[i].id,s1[i].name,s1[i].fees);
}