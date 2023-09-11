///Structutre of pinter
//Structure of pointer is used for to allocate structure memory dynamacally at run time.
// we alloacte structure of memory by using the  dyanamic memory alloction function like as
//malloc relloc,free,reallloc etc
//Wap to enter id and name and price and show data by using pointer of structure.
#include<stdio.h>
#include<stdlib.h>
struct product 
{
	int id;
	char name[70];
	int sallary;
};
struct product *p;
int main()
{
 p=(struct product *)malloc(sizeof(product));
	printf("Enter a id\n");
	scanf("%d",&p->id);
	printf(" Enter a name\n");
	scanf("%s",&p->name);
	printf("Enter a sallary\n");
	scanf("%d",&p->sallary);
	printf("The id is:- %d",p->id);
	printf("\nThe name is:- %s",p->name);
	printf("\nThe sallary is:- %d",p->sallary);
}