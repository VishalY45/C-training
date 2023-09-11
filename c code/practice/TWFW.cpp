#include<stdio.h>
int main()
{
	int tw,fw,v,w;
	printf(" Enter a vehicle\n");
	scanf("%d",&v);
	printf(" Enter a wheel\n");
	scanf("%d",&w);
	if(2<=w&&w%2=0&&v<w)
	{
		fw=((v*4)-w)/2;
		printf("fw=%d",fw);
		tw=v-fw;
		printf("tw=%d",tw);
	}
	else
	{
		printf(" invalid input");
	}
}