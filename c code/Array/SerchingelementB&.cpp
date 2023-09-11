#include<stdio.h>
int main()
//binary search ekement

{
	int l=0,r,a[5],mid,f=0,i,skey,len;
	
	printf(" Enter a element in array\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter search element");
	scanf("%d",&skey);
	r=(len-1);
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(a[mid]==skey)
		{
			f=1;
			break;
		}
		if(a[mid]<skey)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	if(f)
	{
		printf(" value is found");
	}
	else
	{
		printf(" value is not found");
	}
}
/*
{
	int i,a[5],len,f=0,skey;
	printf(" Entr a element\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter search digit");
	scanf("%d",&skey);
	for(i=0;i<len;i++)
	{
		if(skey==a[i])
		{
			f=1;
			break;
		}
	}
		if(f)
	{
		printf(" value is found");
	}
	else
	{
		printf(" value is not found");
	}
}

// find duplicate no
/*{
	int i,j,len,a[5],f=0;
	printf(" Enter a element\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" duplicate elemnt is\n");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				printf(" %d",a[j]);
			}
		}
	}
}*/

/*{
	int i,j,a[5],nsize;
	printf(" Enter a no");
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
			
		  	nsize=a[i];
		  	a[i]=a[j];
		  	a[j]=nsize;
		  }
		}	
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
}*/

/*{
	int a[5],len,i,j,temp;
	printf(" Enter a no\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf(" decending array\n");
	for(i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
	}
}*/