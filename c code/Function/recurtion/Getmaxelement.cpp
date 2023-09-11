#include<stdio.h>
int max=0,i=0;
int getmax(int a[],int size)
{
  if(i<size)
  {
  	if(a[i]>max)
  	{
  		max=a[i];
	  }
	  i++;
	  getmax(a,size);
	  }
	  return max;
	  	
}
int main()
{
	int size;
	printf(" ENter a size\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int result=getmax(a,size);
	printf("Max:=%d",result);
	
}