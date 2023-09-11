/*
: WAP to remove the duplicated element from array 
1   2   3   4 2
Output:  1    3   4

*/
#include<Stdio.h>
int main()
{
	int a[5],i,j,nsize=0;
	printf(" Enter a no");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nbefore removing array elements");
	for(i=0;i<5;i++)
	{
	printf("a[%d]--->%d",i,a[i]);
}
printf("\nNon duplicate elements\n");
for(i=0;i<5;i++)
{int f=0;
	for(j=i+1;j<5;j++)
	{
		if(a[i]==a[j])
		{
			f=0;
		}
		else
		{
			f=1;
		}
	}
//	nsize++;
if(f==1)
printf("\n%d",a[i]);
}
}
//for(i=0;i<nsize;i++)