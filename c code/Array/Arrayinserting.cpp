//Create array of size 6 and store 5 values at initial level and input index and value then insert value on specified index and shift value on next index before inserting value.
#include<stdio.h>
int main()
{
	int a[6],index,value,i;
	int len=sizeof(a)/sizeof(a[0]);
	printf("\n Enter array element");
	for(i=0;i<(len-1);i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" enter index and value");
	scanf("%d%d",&index,&value);
	printf("\n before swaping array");
	for(i=0;i<len;i++)
	{
		printf("\na[%d]--->%d",i,a[i]);
	}
	for(i=(len-2);i>=index;i--)//34567 3;3>=2;i--//2
	{
		a[i+1]=a[i];//4=3=5//3=2
	}
	a[index]=value;
	printf(" \nafter swaping");
	for(i=0;i<len;i++)
	{
		printf("\na[%d]--->%d",i,a[i]);
	}
}
