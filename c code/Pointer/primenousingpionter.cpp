#include<stdio.h>
int main()
{
	int size,i,j,f=1,k=2,*ptr;
	printf(" ENter array size");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nprime no:-\n");
	for(i=0;i<size;i++)//2 3 4 5 6 7
	{
		f=0;
		k=2;
		while(k<ptr[i])//2<4
		{
			if(ptr[i]%k==0)
			{
		  	  f=1;
			  break;
		    }
			k++;
		}
		if(f==0&&ptr[i]!=1)
	    {
		   printf("%d\n",ptr[i]);
	    }		
	}
	
}