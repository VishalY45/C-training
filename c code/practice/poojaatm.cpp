#include<stdio.h>
int main()
{
	float bal,with;
	printf(" Enter a balance and withdrtaw amout");
	scanf("%f%f",&bal,&with);
	if(bal<=2000&& with<bal&&((int)with%5==0))
	{
		bal=bal-with-0.5;
		printf("balance is %f",bal);
		printf(" \nWithdrew amount %f",with);
	}
	else
	{
		printf("  insfficent balance");
	}
}