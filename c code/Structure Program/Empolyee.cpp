#include<stdio.h>
#include<string.h>
struct emp
{
	int id;
	char name[10];
	long int sal;
};
int main()
{
	struct emp e;
	printf(" Enter a emp id ");
	scanf("%d",&e.id);
	printf(" Enter a emp name ");
	scanf("%s",&e.name);
	printf(" Enter a emp sal ");
	scanf("%ld",&e.sal);
	printf("The emp id is%d",e.id);
	printf("\nThe emp sallary %ld",e.sal);
	printf("The emp name:-%s",e.name);
	
}
