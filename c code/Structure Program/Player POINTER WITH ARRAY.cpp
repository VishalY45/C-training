//Pointer of structure with array;
#include<stdio.h>
#include<Stdlib.h>
struct player
{
	int No;
	char name[80];
	int Runs;
};
struct player *p;
int main()
{
	int count;
	printf("Enter a count");
	scanf("%d",&count);
	p=(struct player *)malloc(sizeof(player)*count);
	printf("Enter a player id name and runs\n");
	for(int i=0;i<count;i++)
	{
		printf("Enter No Name and Runs\n");
		scanf("%d%s%d",&p[i].No,&p[i].name,&p[i].Runs);
	}
	printf("Display information\n");
	for(int i=0;i<count;i++)
	{
	   
		printf("%d\t%s\t%d\n",p[i].No,p[i].name,p[i].Runs);	
	}
}