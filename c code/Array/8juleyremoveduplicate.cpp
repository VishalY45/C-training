
/*
: WAP to remove the duplicated element from array 
1   2   3   4 2
Output:  1    3   4

*/
#include<Stdio.h>
int main()
/*
{
	int a[5],i,j,f=0;
	printf(" Enter a no");
	for(i=0;i<5-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		//int k=i+1;
		int j=i+1;
/*	while(k<5)
	{
		if(a[i]<a[k]||a[i>a[j]]&&(a[i]!=a[j]))//12342
		k++;
}
*/
/*
if(a[i]<a[j]||a[i>a[j]]&&(a[i]!=a[j]))
{

			
	for(j=i+1;j<5;j++)
	{f=0;
//	if(a[i]<a[j]||a[i>a[j]]&&(a[i]!=a[j]))
	
	
	
		if (a[i]==a[j])
		{
		f=0;
		break;
		}
		else
		{
			f=1;
			
		}
	}
	
		if(f==1)
		{
			printf("\n%d",a[i])	;
		}	
	}
}
}
*/
{
	int a[100],i,j,k,len;
	//int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter a length of array");
	scanf("%d",&len);
	printf(" Enter a no");
	for(i=0;i<len;i++)
	{
	
	scanf("%d",&a[i]);
	
}
	for(i=0;i<len;i++)
	{
	for(j=i+1;j<len;j++)
	{
		if(a[i]==a[j])
	{
		for(int k=j;k<(len-1);k++)
		{
			a[k]=a[k+1];
		}
		len--;
		j--;
			}	
				}	
	}
	printf(" after removing duplicate array");
	for(i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
	}
}
