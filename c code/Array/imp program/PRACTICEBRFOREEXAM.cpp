//find min
#include<stdio.h>
int main()
/*
{
	int size,i,j,max=0;
	printf("Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter a array elemnt\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay Max:-\n");
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>max)
			{
			  max=a[i];
			}
		}
	}
	printf("\nThe Max No Is %d",max);
}
*/
//--------------------------------------------------------------------------------------------------------
//Find minimum element
/*{
	int i,j,size;
	printf(" Enter a Arry size");
	scanf("%d",&size);
	int arr[size];
	int min=arr[0];
	printf(" Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Display Minimum no:-");
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
	}
	printf("\t%d",min);
}*/
//----------------------------------------------------------------------------------------------
/*{
	int a=100,*ptr,*ptr1;
	ptr=&a;
	ptr1=ptr;
	ptr++;
	*ptr1=200;
	printf("%d",a);
}*/
//-----------------------------------------------------------------------------------------------
//Shorting array in Ascending order by using buble short alogorithm
/*{
	int size,i,j;
	printf(" Enter a arry size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array elemnt\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay Arrya in Aseending order\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nDisplay Array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}*/
//--------------------------------------------------------------------------------
//Shorting array in Decending order by using buble short alogorithm
/*{
	int size,i,j;
	printf(" Enter a arry size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array elemnt\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay Arrya in Decending order\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nDisplay Array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
*/
//----------------------------------------------------------------------------------------
//Searching element  by using linear search//value find;
/*{
	int size,i,j,skey,f=0;
	printf(" Enter a array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter a array size\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter a search value");
	scanf("%d",&skey);
	for(i=0;i<size;i++)
	{
		if(a[i]==skey)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("The value is found");
	}
	else
	{
		printf("The value is not found");
	}
}
*/
//---------------------------------------------------------------------
// Search value by using binary search
/*{
	int size,l=0,r,mid,f=0;
	printf(" Enter a size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter a array size\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int skey;
	printf("Enter a skey");
	scanf("%d",&skey);
	r=size-1;
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
	if(f==1)
	{
		printf("The Value is found\n");
	}
	else
	{
		printf("The value is not found");
	}
}
*/
//-----------------------------------------------------------------------
// Delete element by using value;
/*{
	int size,i,j,value,f=0;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Enter a value which we want to delte\n");
	scanf("%d",&value);
		for(j=0;j<size;j++)
		{
			if(arr[j]==value)
			{
				f=1;
				break;
			}
		}
	if(f)
	{
		for(i=j;i<size;i++)
		{
			arr[i]=arr[i+1];
		}
	}
	printf("\nDisplay Arry\n");
	for(i=0;i<size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
*/
//----------------------------------------------------------------
// Delete index by using index no
/*
{
	int size,i,j,value,f=0;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	printf(" Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Enter a value which we want to delte\n");
	scanf("%d",&value);
		for(j=0;j<size;j++)
		{
			if(j==value)
			{
				f=1;
				break;
			}
		}
	if(f)
	{
		for(i=j;i<size;i++)
		{
			arr[i]=arr[i+1];
		}
	}
	else
	{
		printf("The value not found which we want to delete\n");
	}
	printf("\nDisplay Arry\n");
	for(i=0;i<size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}*/
//---------------------------------------------------------------------------
// Delete element by using second technique;
/*{
	int i,j,size,value,size1=0,f=0;
	printf("Enter a array size\n");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a value which we want to delete\n");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(arr[i]!=value)
		{
			arr[size1]=arr[i];
			size1++;
		}
	}	for(i=0;i<size1;i++)
	{
		printf("%d\t",arr[i]);
	}
}*/
//-----------------------------------------------------------------------
//Wap to enter array and Find its occurance;
/*{
	int size,i,j,k=-1,count=0,f=0;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter a array name\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=k;
			}
		}
	if(a[i]!=k)
	{
		printf("%d--->%d\n",a[i],count);
	}
}
}*/
//-----------------------------------------------------------
//Second method
/*{
	int size,i,j,k=-1,count=0,f=0;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter a array name\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int fr[size];
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				fr[j]=k;
			}
		}
	
	if(fr[i]!=k)
	{
	fr[i]=count;	
	}
}
	for(i=0;i<size;i++)
	{
		if(fr[i]!=k)
		{
			printf("%d---%d\n",a[i],fr[i]);
		}
	}
}*/
//==============================================================================
//Wap to enter array element and show duplicate elemenrt;
/*{
	int i,j,size;
	printf("Enter a size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter a array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Display Remove element\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d\n",arr[i]);
			}
		}
	}
}*/
//---------------------------------------------------------------------
/*{
	int i,j,size;
	printf("Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter array elemnt\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display after removing duplicite element\n");
	for(i=0;i<size;i++)
	{
		int f=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				f=0;
				a[j]=-1;
				break;
			}
		}
	  if(f==1&&a[i]!=-1)
	  {
	  	printf("%d\n",a[i]);
		  }	
	}
}*/
//-------------------------------------------------------
//Second method
/*{
	int i,j,size;
	printf("Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter array elemnt\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display after removing duplicite element\n");
	for(i=0;i<size;i++)//223452
	{
		int f=0;
		for(j=0;j<size;j++)
		{
			if(a[i]==a[j])
			{
				f++;
			}
		}
	  if(f<=1)
	  {
	  	printf("%d\n",a[i]);
		  }	
	}
}*/
//---------------------------------------------------------------
// Wap to enter array and printf its reverse;
{
	int i,size,j;
	printf("Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter a arry elemnt\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore revrse\n");
		for(i=0;i<size;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
    for(i=0;i<size;i++)
    {
    	for(j=i+1;j<size;j++)
    	{
    		int temp=a[i];
    		a[i]=a[j];
    		a[j]=temp;
		}
	}
	printf("\nDiplay result\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
}