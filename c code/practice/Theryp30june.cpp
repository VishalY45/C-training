#include<stdio.h>
#include<dos.h>
int main()
{
	int no,i,j,tab;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d\t",i*j);
			//delay(100);
		}
		printf("\n");
	}
}
