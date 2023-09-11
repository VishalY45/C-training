#include<stdio.h>
int main()
{
	int py,id;
	printf(" Enter a id and passing year\n");
	scanf("%d%d",&id,&py);
	if(id>=1&&id<=100&&py>=2015)
	{
		float p;
		printf(" Enter student percentage");
		scanf("%f",&p);
		if(p>=40)
		{
			printf(" Pass lc");
		}
		else
		{
			printf(" fail lc");
		}
	}
	else
	{
		printf(" \n candidat is not our student");
	}
}