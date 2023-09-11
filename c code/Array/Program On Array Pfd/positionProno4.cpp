#include<stdio.h>
//WAP to insert the element on specified position in array ?
int main(){
	int a[6],i,j,index,value;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter a array element\n");
	for(i=0;i<(len-1);i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display matrix\n");
	for(i=0;i<(len-1);i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n ENter a index & value");
	scanf("%d%d",&index,&value);
	for(i=(len-2);i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	printf(" After inserting\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
}
