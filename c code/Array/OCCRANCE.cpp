#include<stdio.h>
int main()
{
	int a[5],i,len,f=-1,count=0;
	printf(" Enter a element\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int fr[5],j;
	for(i=0;i<5;i++)
	{count=1;
		for(j=i+1;j<5;j++)//2 3 4 3 2//3
		{
			if(a[i]==a[j])//2==2//3==4//3==3
			{
				count++;//2//2
				fr[j]=f;//4=-//3=-1//
			}
		}
			if(fr[i]!=f)
			{
				fr[i]=count;//0=2
			}
			
		
	}
	for(i=0;i<5;i++)
	{
		if(fr[i]!=f)
		{
			printf("a[%d]--->fr[%d]\n",a[i],fr[i]);
		}
	}
}
		
	
	
