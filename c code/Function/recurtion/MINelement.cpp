#include<Stdio.h>
int i=0;
int minelement(int a[],int size,int min)
{
	if(i<size)
	{
	
	if(a[i]<min)
	{
		min=a[i];
	}
	i++;
	return minelement(a,size,min);
}
return min;
	
}
int main()
{
	int size;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int result=minelement(a,size,min);
	printf("min:-%d",result);
}