#include<stdio.h>
int main()

{
	int *ptr,i,a[5]={10,20,30,40,50};
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("a[%d]-->%d\n",i,ptr[i]);
	}
}
/*{
	int no1,no2,sum=0;
	printf(" Enter no 1\n");
	scanf("%d",&no1);
	printf(" Enter no 1\n");
	scanf("%d",&no2);
	int *ptr=&no1;
	int *ptr2=&no2;
	sum=*ptr+*ptr2;
	
	printf(" The sum is%d",sum);
}*/
/*{
	//int *ptr,*ptr1;
	int no1,no2;
	printf(" Enter two no");
	scanf("%d",&no1);
	printf(" Enter two no");
	scanf("%d",&no2);
int	*ptr=&no1;
int	*ptr1=&no2;
	*ptr=*ptr+*ptr1;
	*ptr1=*ptr-*ptr1;
	*ptr=*ptr-*ptr1;
	printf(" After swaping%d%d",*ptr,*ptr1);
	
	
	
	
}*/
/*{
	int a;
	printf(" ENter a no");
	scanf("%d",&a);
	int *ptr;
	ptr=&a;
	printf("ptr=%d",*ptr);
}*/