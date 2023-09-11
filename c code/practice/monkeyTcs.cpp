#include<stdio.h>
int main()
{
	int n,k,j,m,p;
	float banana=0.0,peanats=0.0;
	printf(" total monkey\n no of banana\n no of eatable banana\n no of eatable peanuts\n no of banana \n no of peanunts");
	scanf("%d%d%d%d%d",&n,&k,&j,&m,&p);
	printf("\n no of moneky %d",n);
	printf("\n no of eatable banana %d",k);
	printf("\n no of eatable peanunts %d",j);
	printf("\n no of no of banana %d",m);
	printf("\n no of no of peanunts %d",p);
	if(k>0)
	banana=(float)m/k;
	if(j>0)
	peanats=(float)p/j;
	n=n-banana-peanats;
	printf(" \nno of monkey left on %d",n);
}