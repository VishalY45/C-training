#include<stdio.h>
int main()

{
	int a[5],i,j;
	printf(" Enter a no");//12344
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n duplicate array element\n");
	for(i=0;i<5;i++)
	{
	//	printf("a[%d]---%d",i,a[i]);
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
			
			printf("%d\n",a[j]);
		}
		
		}
		
		
		
		
	}
	return 0;
}
