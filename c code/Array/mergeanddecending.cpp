#include<stdio.h>
int main()
{
	int i,j,s1=5,s2=5,size,size1,a[i],b[i],merge;
	printf(" ENter a size of array\n");
	scanf("%d",&size);
//	size=sizeof(a)/sizeof(a[0]);
     printf(" Enter frist element array");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&a[i]);
	 }
	 printf(" Enter size of frist array\n");
	 scanf("%d",&size1);
	 printf(" Enter second array element\n");
	 for(i=0;i<size1;i++)
	 {
	 	scanf("%d",&b[i]);
	 }
     
     merge=size+size1;
     int c[merge];
     for(i=0;i<size;i++)
     {
     	c[i]=a[i];
	 }
	 	for(i=0,j=size;j<merge&&i<size;i++,j++)
	 	{
	 		c[j]=b[i];
		 }
		 for(i=0;i<merge;i++)
		 {
		 	printf("%d\t",c[i]);
		 }
		 printf("\n");
		 printf("\n Array after decending\n");
		 for(i=0;i<merge;i++)//1 2 3 4 5 6 7 8 
		 {
		 	for(j=i+1;j<merge;j++)//8
		 	{
			 
		 	if(a[i]<a[j])
		 	{
			 
		 	int temp=c[i];
		 	c[i]=c[j];
		 	c[j]=temp;
		 }
		 }
}
	for(i=0;i<merge;i++)
{
	printf(" %d\t",c[i]);
}
}
