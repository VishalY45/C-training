#include<stdio.h>
#include<string.h>
#include<conio.h>;
struct player
{
	int jerseyNo;
	char name[10];
	int run;
	int MatchNo;
}p;
int main()
{
	
	printf(" Enter a jersey no:-");
	scanf("%d",&p.jerseyNo);
	printf("Enter a name:-");
	scanf("%s",&p.name);
	printf("Enter a match no:-");
	scanf("%d",&p.MatchNo);
	printf("Enter a run:-");
	scanf("%d",&p.run);
	printf("The jersey no is:-%d",p.jerseyNo);
	printf("\nThe name is:- %s",p.name);
	printf("\nThe match no is:-%d",p.MatchNo);
	printf("\nThe run run:-%d",p.run);
}